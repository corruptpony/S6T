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
	cl_platform_id platform_id[3];
	
	/* return values for extra info */
	cl_uint ret_num_devices;
	cl_uint ret_num_platforms;
	cl_int ret;
	
	/* Declare device mem */
	cl_mem dev_gdata;
	cl_mem dev_sdata;

	/* Parameters for testing */
	char fileName[] = "./kernel2.cl";
	const int GLOBAL_SIZE = 512 * 512 * 512;
	const int LOCAL_SIZE = 512;

	/* Fill array with test data */
	int* dataArray = (int*)malloc(sizeof(int) * GLOBAL_SIZE);

	for (int i = 0; i < GLOBAL_SIZE; i++)
	{
		dataArray[i] = i % 10;
	}

	/* Get current time before calculating the array with CPU */
	LARGE_INTEGER freqCPU, startCPU, endCPU;
	QueryPerformanceFrequency(&freqCPU);
	QueryPerformanceCounter(&startCPU);

	int sum = 0;
	for (int i = 0; i < GLOBAL_SIZE; i++)
	{
		sum += dataArray[i];
	}

	/* Get current time after calculating the array with CPU */
	QueryPerformanceCounter(&endCPU);

	/* Get Platform and Device Info */
	char* info;
	size_t infoSize;
	ret = clGetPlatformIDs(3, platform_id, &ret_num_platforms);
	checkError(ret, "Couldn't get platform ids");
	ret = clGetDeviceIDs(platform_id[2], CL_DEVICE_TYPE_DEFAULT, 1, &device_id, &ret_num_devices);
	checkError(ret, "Couldn't get device ids");
	ret = clGetPlatformInfo(platform_id[2], CL_PLATFORM_NAME, 0, NULL, &infoSize);
	checkError(ret, "Couldn't get platform info");
	info = (char*)malloc(infoSize);
	ret = clGetPlatformInfo(platform_id[2], CL_PLATFORM_NAME, infoSize, info, NULL);
	checkError(ret, "Couldn't get platform attribute value");
	printf("Running on %s\n\n", info);

	/* Create OpenCL Context */
	context = clCreateContext(NULL, 1, &device_id, NULL, NULL, &ret);
	checkError(ret, "Couldn't create context");

	/* Create command queue */
	command_queue = clCreateCommandQueue(context, device_id, 0, &ret);
	checkError(ret, "Couldn't create commandqueue");

	/* Allocate memory for arrays on the Compute Device */
	dev_gdata = clCreateBuffer(context, CL_MEM_READ_ONLY, GLOBAL_SIZE * sizeof(cl_int), NULL, &ret);
	checkError(ret, "Couldn't create gdata on device");
	
	/* Create kernel program */
	program = build_program(context, device_id, fileName);
	checkError(ret, "Couldn't compile");

	/* Create OpenCL kernel from the compiled program */
	kernel = clCreateKernel(program, "reduction", &ret);
	checkError(ret, "Couldn't create kernel");

	/* Set OpenCL kernel arguments */
	ret = clSetKernelArg(kernel, 0, sizeof(cl_mem), (void *)&dev_gdata);
	checkError(ret, "Couldn't set arg gdata");

	/* Get current time before calculating the array with GPU */
	LARGE_INTEGER freq, start;
	QueryPerformanceFrequency(&freq);
	QueryPerformanceCounter(&start);

	/* Write new bit of data to GPU */
	ret = clEnqueueWriteBuffer(command_queue, dev_gdata, CL_TRUE, 0, GLOBAL_SIZE * sizeof(cl_int), dataArray, 0, NULL, NULL);
	checkError(ret, "Couldn't write array on device");

	size_t globalSize[] = { GLOBAL_SIZE };
	size_t localSize[] = { LOCAL_SIZE };

	/* Set local size */
	ret = clSetKernelArg(kernel, 1, localSize[0] * sizeof(cl_int), NULL);
	checkError(ret, "Couldn't set arg sdata");

	for (int i = 0; i < 3; i++)
	{
		
		/* Activate OpenCL kernel on the Compute Device */
		ret = clEnqueueNDRangeKernel(command_queue,
			kernel,
			1,			// 1D array 
			NULL,
			globalSize,
			localSize,
			0,
			NULL,
			NULL);
		checkError(ret, "Could not activate kernel");
		
		clFinish(command_queue);

		globalSize[0] = globalSize[0] / 512;
	}
	
	/* Transfer result back to host */
	ret = clEnqueueReadBuffer(command_queue, dev_gdata, CL_TRUE, 0, sizeof(int), dataArray, 0, NULL, NULL);
	checkError(ret, "Couldn't get data from host");

	/* Get current time after calculating the array on GPU */
	LARGE_INTEGER end;
	QueryPerformanceCounter(&end);

	/* Print elapsed time */
	printf("Elapsed time CPU: %f msec\n", (double)(endCPU.QuadPart - startCPU.QuadPart) / freqCPU.QuadPart * 1000.0);
	printf("Elapsed time GPU: %f msec\n", (double)(end.QuadPart - start.QuadPart) / freq.QuadPart * 1000.0);

	printf("result CPU: %i\n", sum);
	printf("result GPU: %i\n", dataArray[0]);

	/* Finalization */
	ret = clFlush(command_queue);
	ret = clFinish(command_queue);
	ret = clReleaseKernel(kernel);
	ret = clReleaseProgram(program);
	ret = clReleaseMemObject(dev_gdata);
	ret = clReleaseCommandQueue(command_queue);
	ret = clReleaseContext(context);
	free(dataArray);

	/* Blocking to show result */
	printf("Press ENTER to continue...\n");
	getchar();

	return 0;
}