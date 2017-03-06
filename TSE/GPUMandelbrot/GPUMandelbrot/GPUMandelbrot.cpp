#define _CRT_SECURE_NO_WARNINGS
#define _SCL_SECURE_NO_WARNINGS

#include "bitmap_image.hpp"
#include "mandelbrot_frame.h"
#include "opencl_utils.h"
#include <windows.h>
#include <stdio.h>
#include <iostream>
#include <CL/cl.h>
#include <stdlib.h>

#define WIDTH 800
#define HEIGHT 600
#define OFFSET_X 0
#define OFFSET_Y 0
#define ZOOMFACTOR 200
#define MAX_ITERATIONS 1024
#define COLORTABLE_SIZE 1024

mandelbrot_color colortable2[COLORTABLE_SIZE];

void create_colortable() 
{
	/* Initialize color table values */
	for(unsigned int i = 0; i < COLORTABLE_SIZE; i++)
	{
		if (i < 64) {
			mandelbrot_color color_entry = {0, 0, (5*i+20<255)?5*i+20:255};
			colortable2[i] = color_entry;
		}

		else if (i < 128) {
			mandelbrot_color color_entry = {0, 2*i, 255};
			colortable2[i] = color_entry;
		}

		else if (i < 512) {
			mandelbrot_color color_entry = {0, (i/4<255)?i/4:255, (i/4<255)?i/4:255};
			colortable2[i] = color_entry;
		}

		else if (i < 768) {
			mandelbrot_color color_entry = {0, (i/4<255)?i/4:255, (i/4<255)?i/4:255};
			colortable2[i] = color_entry;
		}

		else {
			mandelbrot_color color_entry = {0,(i/10<255)?i/10:255,(i/10<255)?i/10:255};
			colortable2[i] = color_entry;
		}
	}	
}

int main() {
	/* Define GPU parameters */
	cl_device_id device_id = NULL;
	cl_context context = NULL;
	cl_command_queue command_queue = NULL;
	cl_program program = NULL;
	cl_kernel kernel = NULL;
	cl_platform_id platform_id = NULL;
	
	cl_uint ret_num_devices;
	cl_uint ret_num_platforms;
	cl_int ret;
	
	cl_mem dev_bitmap = NULL;
	cl_mem dev_colortable = NULL;
	cl_mem dev_params = NULL;

	size_t infoSize;

	
	/* Create PARAMS*/
	unsigned int PARAMS[6];
	PARAMS[0] = ZOOMFACTOR;
	PARAMS[1] = WIDTH;
	PARAMS[2] = HEIGHT;
	PARAMS[3] = OFFSET_X;
	PARAMS[4] = OFFSET_Y;
	PARAMS[5] = MAX_ITERATIONS;

	char* info;
	char fileName[] = "./mandelbrot.cl";

	/* Create the colortable and fill it with colors */
	create_colortable();

	/* Remove previous bitmap */
	remove("fractal_output.bmp");

	/* Create an empty image */
	bitmap_image image(WIDTH, HEIGHT);
	mandelbrot_color * p = (mandelbrot_color *)image.data();

	/* Get Platform and Device Info */
	ret = clGetPlatformIDs(1, &platform_id, &ret_num_platforms);
	checkError(ret, "Couldn't get platform ids");
	ret = clGetDeviceIDs(platform_id, CL_DEVICE_TYPE_DEFAULT, 1, &device_id, &ret_num_devices);
	checkError(ret, "Couldn't get device ids");
	ret = clGetPlatformInfo(platform_id, CL_PLATFORM_NAME, 0, NULL, &infoSize);
	checkError(ret, "Couldn't get platform info");
	info = (char*)malloc(infoSize);
	ret = clGetPlatformInfo(platform_id, CL_PLATFORM_NAME, infoSize, info, NULL);
	checkError(ret, "Couldn't get platform attribute value");
	printf("Running on %s\n\n", info);

	/* Create OpenCL Context */
	context = clCreateContext(NULL, 1, &device_id, NULL, NULL, &ret);
	checkError(ret, "Couldn't create context");

	/* Create command queue */
	command_queue = clCreateCommandQueue(context, device_id, 0, &ret);
	checkError(ret, "Couldn't create commandqueue");

	/* Allocate memory for arrays on the Compute Device */
	dev_params = clCreateBuffer(context, CL_MEM_READ_ONLY, 6 * sizeof(int), NULL, &ret);
	checkError(ret, "Couldn't create params on device");
	dev_bitmap = clCreateBuffer(context, CL_MEM_READ_WRITE, WIDTH * HEIGHT * sizeof(mandelbrot_color), NULL, &ret);
	checkError(ret, "Couldn't create bitmap on device");
	dev_colortable = clCreateBuffer(context, CL_MEM_READ_ONLY, COLORTABLE_SIZE * sizeof(mandelbrot_color), NULL, &ret);
	checkError(ret, "Couldn't create colortable on device");

	/* Copy arrays from host memory to Compute Devive */
	ret = clEnqueueWriteBuffer(command_queue, dev_params, CL_TRUE, 0, 6 * sizeof(int), PARAMS, 0, NULL, NULL);
	checkError(ret, "Couldn't write params on device");
	ret = clEnqueueWriteBuffer(command_queue, dev_colortable, CL_TRUE, 0, COLORTABLE_SIZE * sizeof(mandelbrot_color), colortable2, 0, NULL, NULL);
	checkError(ret, "Couldn't write colortable on device");

	/* Create kernel program */
	program = build_program(context, device_id, fileName);
	checkError(ret, "Couldn't compile");

	/* Create OpenCL kernel from the compiled program */
	kernel = clCreateKernel(program, "mandelbrot", &ret);
	checkError(ret, "Couldn't create kernel");

	/* Set OpenCL kernel arguments */
	ret = clSetKernelArg(kernel, 0, sizeof(cl_mem), (void *)&dev_params);
	checkError(ret, "Couldn't set arg dev_params");
	ret = clSetKernelArg(kernel, 1, sizeof(cl_mem), (void *)&dev_bitmap);
	checkError(ret, "Couldn't set arg dev_bitmap");
	ret = clSetKernelArg(kernel, 2, sizeof(cl_mem), (void *)&dev_colortable);
	checkError(ret, "Couldn't set arg dev_colortable");

	/* Set global en local size */
	size_t globalSize[] = { WIDTH , HEIGHT };
	//size_t localSize[] = { 800 , 1 };

	/* Get current time before calculating the fractal */
	LARGE_INTEGER freq, start;
	QueryPerformanceFrequency(&freq);
	QueryPerformanceCounter(&start);

	/* Activate OpenCL kernel on the Compute Device */
	ret = clEnqueueNDRangeKernel(command_queue,
		kernel,
		2,			// 2D matrix 
		NULL,
		globalSize,
		NULL,		// local size (NULL = auto) 
		0,
		NULL,
		NULL);
	checkError(ret, "Could not activate kernel");

	/* Get current time after calculating the fractal */
	LARGE_INTEGER end;
	QueryPerformanceCounter(&end);

	/* Transfer result back to host */
	ret = clEnqueueReadBuffer(command_queue, dev_bitmap, CL_TRUE, 0, WIDTH * HEIGHT * sizeof(mandelbrot_color), p, 0, NULL, NULL);
	checkError(ret, "Couldn't get data form host");

	/* Add blocking element */
	clFinish(command_queue);

	/* Finalization */
	ret = clFlush(command_queue);
	ret = clFinish(command_queue);
	ret = clReleaseKernel(kernel);
	ret = clReleaseProgram(program);
	ret = clReleaseMemObject(dev_bitmap);
	ret = clReleaseMemObject(dev_colortable);
	ret = clReleaseMemObject(dev_params);
	ret = clReleaseCommandQueue(command_queue);
	ret = clReleaseContext(context);

	/* Write image to file */
	image.save_image("fractal_output.bmp");

	/* Show image in mspaint */
	WinExec("mspaint fractal_output.bmp", SW_MAXIMIZE);

	/* Print elapsed time */
	printf("Elapsed time to calculate fractal: %f msec\n", (double)(end.QuadPart - start.QuadPart) / freq.QuadPart * 1000.0);
	printf("Press ENTER to continue...\n");

	getchar();

	return 0;
}