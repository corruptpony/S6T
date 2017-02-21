// OpenCL_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <CL/cl.h>
#include <stdlib.h>
#include <windows.h>
#include "opencl_utils.h"
#include "mandelbrot_frame.h"
#include "bitmap_image.hpp"


#define MEM_SIZE (128)
#define MAX_SOURCE_SIZE (0x100000)

#define WIDTH 800
#define HEIGHT 600
#define OFFSET_X 0
#define OFFSET_Y 0
#define ZOOMFACTOR 200
#define MAX_ITERATIONS 8
#define COLORTABLE_SIZE 1024 


int main(void)
{
	cl_device_id device_id = NULL;
	cl_context context = NULL;
	cl_command_queue command_queue = NULL;
	cl_mem memobj = NULL;
	cl_program program = NULL;
	cl_kernel kernel = NULL;
	cl_platform_id platform_id = NULL;
	cl_uint ret_num_devices;
	cl_uint ret_num_platforms;
	cl_int ret;
	cl_mem PARAMSonDevice = NULL;
	cl_mem colortableOnDevice = NULL;
	cl_mem bufferOnDevice = NULL;

	#define SIZE 3

	remove("fractal_output.bmp");

	// Create the colortable and fill it with colors
		//create_colortable();

	// Create an empty image
	bitmap_image image(WIDTH, HEIGHT);
	mandelbrot_color * framebuffer = (mandelbrot_color *)image.data();

	/* Allocate host memory*/
	unsigned int PARAMS_SIZE = sizeof(float) * 6;
	unsigned int BUFFER_SIZE = sizeof(mandelbrot_color) * WIDTH * HEIGHT;
	unsigned int COLOR_SIZE = sizeof(mandelbrot_color) * COLORTABLE_SIZE;
	float* PARAMS = (float*)malloc(PARAMS_SIZE);
	//mandelbrot_color* framebuffer = (mandelbrot_color*)malloc(sizeof(mandelbrot_color) * image.width * image.height);
	mandelbrot_color* colortable = (mandelbrot_color*)malloc(COLOR_SIZE);

	/* Fill PARAMS*/
	PARAMS[0] = (float)1 / ZOOMFACTOR;
	PARAMS[1] = WIDTH;
	PARAMS[2] = HEIGHT;
	PARAMS[3] = (float)OFFSET_X;
	PARAMS[4] = (float)OFFSET_Y;
	PARAMS[5] = MAX_ITERATIONS;

	/* Read Kernel */
	FILE *fp;
	char fileName[] = "./Calculate.cl";
	char *source_str;
	size_t source_size;

	/* Load the source code containing the kernel */
	fp = fopen(fileName, "r");
	if (!fp) {
		fprintf(stderr, "Failed to load kernel.\n");
		exit(1);
	}
	source_str = (char*)malloc(MAX_SOURCE_SIZE);
	source_size = fread(source_str, 1, MAX_SOURCE_SIZE, fp);
	fclose(fp);

	printf("loaded kernel\n");

	/* Get Platform and Device Info */
	ret = clGetPlatformIDs(1, &platform_id, &ret_num_platforms);
	ret = clGetDeviceIDs(platform_id, CL_DEVICE_TYPE_DEFAULT, 1, &device_id, &ret_num_devices);

	/* Create OpenCL Context */
	context = clCreateContext(NULL, 1, &device_id, NULL, NULL, &ret);

	/* Create command queue */
	command_queue = clCreateCommandQueue(context, device_id, 0, &ret);

	/* Allocate memory for arrays on the Compute Device */
	PARAMSonDevice = clCreateBuffer(context, CL_MEM_READ_WRITE, PARAMS_SIZE, NULL, &ret);
	bufferOnDevice = clCreateBuffer(context, CL_MEM_READ_WRITE, BUFFER_SIZE, NULL, &ret);
	colortableOnDevice = clCreateBuffer(context, CL_MEM_READ_WRITE, COLOR_SIZE, NULL, &ret);


	/* Copy arrays A and B from host memory to Compute Devive */
	ret = clEnqueueWriteBuffer(command_queue, PARAMSonDevice, CL_TRUE, 0, PARAMS_SIZE, PARAMS, 0, NULL, NULL);
	ret = clEnqueueWriteBuffer(command_queue, colortableOnDevice, CL_TRUE, 0, COLOR_SIZE, colortable, 0, NULL, NULL);

	/* Create kernel program */
	program = clCreateProgramWithSource(context, 1, (const char **)&source_str, (const size_t *)&source_size, &ret);

	/* Compile the program Just In Time to GPU machine code */
	ret = clBuildProgram(program, 1, &device_id, NULL, NULL, NULL);

	/* Create OpenCL kernel from the compiled program */
	kernel = clCreateKernel(program, "Calculate", &ret);

	printf("kernel created\n");

	/* Set OpenCL kernel arguments */
	ret = clSetKernelArg(kernel, 0, sizeof(cl_mem), (void *)&PARAMSonDevice);
	ret = clSetKernelArg(kernel, 1, sizeof(cl_mem), (void *)&bufferOnDevice);
	ret = clSetKernelArg(kernel, 2, sizeof(cl_mem), (void *)&colortableOnDevice);

	// Get current time before calculating the fractal
	LARGE_INTEGER freq, start;
	QueryPerformanceFrequency(&freq);
	QueryPerformanceCounter(&start);

	// Calculate the fractal
		//mandelbrot_frame((float)OFFSET_X, (float)OFFSET_Y, (float)1/ZOOMFACTOR, MAX_ITERATIONS, p, colortable2, WIDTH, HEIGHT);

	/* Activate OpenCL kernel on the Compute Device */
	size_t globalSize[] = { BUFFER_SIZE };
	size_t localSize[] = { 1024 };
	clEnqueueNDRangeKernel(	command_queue, 
							kernel, 
							1,           // it’s a 1-dimensional matrix 
							NULL, 
							globalSize,  // 9 work items globally
							localSize,   // 3 work item per group 
							0,
							NULL,
							NULL);


	/* Transfer result array C back to host */
	ret = clEnqueueReadBuffer(command_queue, bufferOnDevice, CL_TRUE, 0, 3 * 3 * sizeof(int), framebuffer, 0, NULL, NULL);

	// Get current time after calculating the fractal
	LARGE_INTEGER end;
	QueryPerformanceCounter(&end);

	// Print elapsed time
	printf("Elapsed time to calculate fractal: %f msec\n", (double)(end.QuadPart - start.QuadPart) / freq.QuadPart * 1000.0);
	printf("Press ENTER to continue...\n");
	getchar();

	// Write image to file
	image.save_image("fractal_output.bmp");

	// Show image in mspaint
	WinExec("mspaint fractal_output.bmp", SW_MAXIMIZE);

	/* Finalization */
	ret = clFlush(command_queue);
	ret = clFinish(command_queue);
	ret = clReleaseKernel(kernel);
	ret = clReleaseProgram(program);
	ret = clReleaseMemObject(memobj);
	ret = clReleaseCommandQueue(command_queue);
	ret = clReleaseContext(context);

	free(source_str);
	free(PARAMS);
	free(colortable);
	free(framebuffer);

	getchar();

	return 0;

}

