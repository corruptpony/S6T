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
#include <GL/freeglut.h>
#include "OpenGL_functions.h"

#define WIDTH 500
#define HEIGHT 500
#define OFFSET_X -0.2414796
#define OFFSET_Y -0.5521
#define ZOOMFACTOR 200
#define MAX_ITERATIONS 8192
#define COLORTABLE_SIZE 4096

mandelbrot_color colortable2[COLORTABLE_SIZE];

/* Create PARAMS*/
int now, previous;
float stepsize = 0.01f;
unsigned int PARAMS[6] = {	
	ZOOMFACTOR, 
	WIDTH, 
	HEIGHT, 
	OFFSET_X, 
	OFFSET_Y, 
	MAX_ITERATIONS };

cl_kernel kernel = NULL;
cl_command_queue command_queue = NULL;
cl_int ret;

cl_mem dev_texture = NULL;
cl_mem dev_colortable = NULL;
cl_mem dev_params = NULL;
cl_mem dev_stepsize = NULL;

GLuint g_texture;

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

void display() {

	/* Clear all pixels */
	glFlush();

	/* Wait for gl to finish before starting a new frame */
	glFinish();

	/* Calculate stepsize from frame duration */
	now = glutGet(GLUT_ELAPSED_TIME);
	stepsize *= pow(0.95, (now - previous) / 100);
	previous = now;

	/* Write stepsize to device */
	ret = clEnqueueWriteBuffer(command_queue, dev_stepsize, CL_TRUE, 0, sizeof(float), &stepsize, 0, NULL, NULL);
	checkError(ret, "Couldn't write stepsize on device");

	/* Aquire GL texture */
	ret = clEnqueueAcquireGLObjects(command_queue, 1, &dev_texture, 0, NULL, NULL);
	checkError(ret, "Couldnt acquire GL object");

	/* Set OpenCL kernel arguments */
	ret = clSetKernelArg(kernel, 0, sizeof(cl_mem), (void *)&dev_params);
	checkError(ret, "Couldn't set arg dev_params");
	ret = clSetKernelArg(kernel, 1, sizeof(cl_mem), (void *)&dev_texture);
	checkError(ret, "Couldn't set arg dev_texture");
	ret = clSetKernelArg(kernel, 2, sizeof(cl_mem), (void *)&dev_colortable);
	checkError(ret, "Couldn't set arg dev_colortable");
	ret = clSetKernelArg(kernel, 3, sizeof(cl_mem), (void *)&dev_stepsize);
	checkError(ret, "Couldn't set arg dev_stepsize");

	/* Set global en local size */
	size_t globalSize[] = { WIDTH , HEIGHT };

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

	/* Release texture */
	ret = clEnqueueReleaseGLObjects(command_queue, 1, &dev_texture, 0, NULL, NULL);
	checkError(ret, "Couldn't release GL object");

	/* Wait for kernel to finish */
	clFinish(command_queue);

	/* Draw a quad */
	draw_quad();

	/* Request the display to work again */
	glutPostRedisplay();
}

int main(int argc, char** argv) {
	/* Define GPU parameters */
	cl_device_id device_id = NULL;
	cl_context context = NULL;
	cl_program program = NULL;
	cl_platform_id platform_id[3];
	
	/* Variables for info */
	cl_uint ret_num_devices;
	cl_uint ret_num_platforms;
	size_t infoSize;
	char* info;

	/* Name of Kernel to use */
	char fileName[] = "./mandelbrot.cl";

	/* Create the colortable and fill it with colors */
	create_colortable();

	/* Create window and glut parameters */
	glutInit(&argc, argv); // Initialize GLUT
	glutSetOption(GLUT_ACTION_ON_WINDOW_CLOSE, GLUT_ACTION_CONTINUE_EXECUTION); // Continues the main if window is closed
	glutCreateWindow("Mandelbrot"); // Create a window with the given title
	glutInitWindowSize(WIDTH, HEIGHT); // Set the window's initial width & height
	glutDisplayFunc(display); // Register display callback handler for window re-paint

	/* Get Platform and Device Info */
	ret = clGetPlatformIDs(3, platform_id, &ret_num_platforms);
	checkError(ret, "Couldn't get platform ids");
	ret = clGetDeviceIDs(platform_id[2], CL_DEVICE_TYPE_GPU, 1, &device_id, &ret_num_devices);
	checkError(ret, "Couldn't get device ids");
	ret = clGetDeviceInfo(device_id, CL_DEVICE_NAME, 0, NULL, &infoSize);
	checkError(ret, "Couldn't get device info size");
	info = (char*)malloc(infoSize);
	ret = clGetDeviceInfo(device_id, CL_DEVICE_NAME, infoSize, info, NULL);
	checkError(ret, "Couldn't get device info value");
	printf("Running on %s\n\n", info);

	/* Create texture in OpenGL using OpenGL_functions */
	g_texture = init_gl(WIDTH, HEIGHT);

	/* Create OpenCL Context properties */
	cl_context_properties properties[] = {
		CL_GL_CONTEXT_KHR, reinterpret_cast<cl_context_properties>(wglGetCurrentContext()),
		CL_WGL_HDC_KHR, reinterpret_cast<cl_context_properties>(wglGetCurrentDC()),
		0 };

	/* Create context */
	context = clCreateContext(properties, 1, &device_id, NULL, NULL, &ret);
	checkError(ret, "Couldn't create context");

	/* Create command queue */
	command_queue = clCreateCommandQueue(context, device_id, 0, &ret);
	checkError(ret, "Couldn't create commandqueue");

	/* Map texture to OpenGL */
	dev_texture = clCreateFromGLTexture2D(context, CL_MEM_WRITE_ONLY, GL_TEXTURE_2D, 0, g_texture, &ret);
	checkError(ret, "Couldn't create texture");

	/* Allocate memory for arrays on the Compute Device */
	dev_params = clCreateBuffer(context, CL_MEM_READ_ONLY, 6 * sizeof(int), NULL, &ret);
	checkError(ret, "Couldn't create params on device");
	dev_stepsize = clCreateBuffer(context, CL_MEM_READ_ONLY, sizeof(float), NULL, &ret);
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

	/* Enter the display function */
	glutMainLoop();

	/* Finalization */
	ret = clFlush(command_queue);
	ret = clFinish(command_queue);
	ret = clReleaseKernel(kernel);
	ret = clReleaseProgram(program);
	ret = clReleaseMemObject(dev_texture);
	ret = clReleaseMemObject(dev_colortable);
	ret = clReleaseMemObject(dev_params);
	ret = clReleaseCommandQueue(command_queue);
	ret = clReleaseContext(context);

	getchar();

	return 0;
}