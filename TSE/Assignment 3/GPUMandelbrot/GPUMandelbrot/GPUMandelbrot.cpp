#define _CRT_SECURE_NO_WARNINGS
#define _SCL_SECURE_NO_WARNINGS

#include "opencl_utils.h"
#include <windows.h>
#include <stdio.h>
#include <iostream>
#include <CL/cl.h>
#include <stdlib.h>

int main() {
	/* Define GPU parameters */
	cl_device_id device_id = NULL;
	cl_context context = NULL;
	cl_command_queue command_queue = NULL;
	cl_program program = NULL;
	cl_kernel kernel = NULL;
	cl_platform_id platform_id = NULL;
	
	/* return values for extra info */
	cl_uint ret_num_devices;
	cl_uint ret_num_platforms;
	cl_int ret;
	
	/* Declare device mem */
	cl_mem dev_gdata;

	/* Parameters for testing */
	char fileName[] = "./kernel1.cl";
	const int GLOBAL_SIZE = 128;
	const int LOCAL_SIZE = 128;

	/* Fill array with test data */
	int dataArray[GLOBAL_SIZE];
	for (int i = 0; i < GLOBAL_SIZE; i++)
	{
		dataArray[i] = i;
	}

	/* Get Platform and Device Info */
	char* info;
	size_t infoSize;
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
	dev_gdata = clCreateBuffer(context, CL_MEM_READ_ONLY, 128 * sizeof(int), NULL, &ret);
	checkError(ret, "Couldn't create gdata on device");

	/* Get current time before calculating the fractal */
	LARGE_INTEGER freq, start;
	QueryPerformanceFrequency(&freq);
	QueryPerformanceCounter(&start);

	/* Copy arrays from host memory to Compute Devive */
	ret = clEnqueueWriteBuffer(command_queue, dev_gdata, CL_TRUE, 0, GLOBAL_SIZE * sizeof(int), dataArray, 0, NULL, NULL);
	checkError(ret, "Couldn't write array on device");

	/* Create kernel program */
	program = build_program(context, device_id, fileName);
	checkError(ret, "Couldn't compile");

	/* Create OpenCL kernel from the compiled program */
	kernel = clCreateKernel(program, "reduction", &ret);
	checkError(ret, "Couldn't create kernel");

	/* Set OpenCL kernel arguments */
	ret = clSetKernelArg(kernel, 0, sizeof(cl_mem), (void *)&dev_gdata);
	checkError(ret, "Couldn't set arg gdata");

	/* Set global en local size */
	size_t globalSize[] = { GLOBAL_SIZE };
	size_t localSize[] = { LOCAL_SIZE };

	/* Activate OpenCL kernel on the Compute Device */
	ret = clEnqueueNDRangeKernel(command_queue,
		kernel,
		1,			// 1D array 
		NULL,
		globalSize,
		localSize,		// local size (NULL = auto) 
		0,
		NULL,
		NULL);
	checkError(ret, "Could not activate kernel");

	/* Transfer result back to host */
	ret = clEnqueueReadBuffer(command_queue, dev_gdata, CL_TRUE, 0, GLOBAL_SIZE * sizeof(int), dataArray, 0, NULL, NULL);
	checkError(ret, "Couldn't get data from host");

	/* Add blocking element */
	clFinish(command_queue);

	/* Get current time after calculating the fractal */
	LARGE_INTEGER end;
	QueryPerformanceCounter(&end);

	/* Print elapsed time */
	printf("Elapsed time: %f msec\n", (double)(end.QuadPart - start.QuadPart) / freq.QuadPart * 1000.0);

	/* Print result */
	int sum = 0;
	for (int i = 0; i < GLOBAL_SIZE/LOCAL_SIZE; i++)
	{
		sum += dataArray[i];
	}
	printf("result: %i\n", sum);

	/* Finalization */
	ret = clFlush(command_queue);
	ret = clFinish(command_queue);
	ret = clReleaseKernel(kernel);
	ret = clReleaseProgram(program);
	ret = clReleaseMemObject(dev_gdata);
	ret = clReleaseCommandQueue(command_queue);
	ret = clReleaseContext(context);

	/* Blocking to show result */
	printf("Press ENTER to continue...\n");
	getchar();

	return 0;
}