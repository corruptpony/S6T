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
	cl_mem dev_matrix_in;
	cl_mem dev_matrix_out;

	/* Parameters for testing */
	char fileName[] = "./kernel1.cl";
	const int MATRIX_ROWS = 512;
	const int MATRIX_COLS = 512;
	const int LOCAL_SIZE = 512;

	/* declare mem for matrix */
	int* dataMatrixOriginal = (int*)malloc(sizeof(int) * MATRIX_ROWS * MATRIX_COLS);
	int* dataMatrix = (int*)malloc(sizeof(int) * MATRIX_ROWS * MATRIX_COLS);

	/* Fill matrix with test data */
	for (int i = 0; i < MATRIX_ROWS * MATRIX_COLS; i++)
	{
		//dataMatrix[i] = i % 10;
		dataMatrixOriginal[i] = rand() % 10;
	}
	
	/* Print original first row and first col */
	/*printf("original row: ");
	for (int i = 0; i < MATRIX_COLS; i++)
	{
		printf("%i ", dataMatrixOriginal[i]);
	}
	printf("\n");
	printf("original col: ");
	for (int i = 1; i < MATRIX_COLS * MATRIX_ROWS; i++)
	{
		if (i % MATRIX_ROWS == 1)
			printf("%i ", dataMatrixOriginal[i - 1]);
	}
	printf("\n\n");*/

	/* Get current time before calculating the array with CPU */
	LARGE_INTEGER freqCPU, startCPU, endCPU;
	QueryPerformanceFrequency(&freqCPU);
	QueryPerformanceCounter(&startCPU);

	/* Transpose with the CPU */
	int y = -1;
	for (int i = 0; i < MATRIX_COLS * MATRIX_ROWS; i++)
	{
		int x = i % (MATRIX_COLS);
		if (i % MATRIX_COLS == 0)
			y++;

		dataMatrix[x * MATRIX_COLS + y] = dataMatrixOriginal[y * MATRIX_COLS + x ];
	}

	/* Get current time after calculating the array with CPU */
	QueryPerformanceCounter(&endCPU);

	/* Print first col and first row */
	/*printf("CPU transposed col: ");
	for (int i = 1; i < MATRIX_COLS * MATRIX_ROWS; i++)
	{
		if (i % MATRIX_ROWS == 1)
			printf("%i ", dataMatrix[i - 1]);
	}
	printf("\n");
	printf("CPU transposed row: ");
	for (int i = 0; i < MATRIX_COLS; i++)
	{
		printf("%i ", dataMatrix[i]);
	}
	printf("\n\n");*/

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
	dev_matrix_in = clCreateBuffer(context, CL_MEM_READ_ONLY, MATRIX_COLS * MATRIX_COLS * sizeof(cl_int), NULL, &ret);
	checkError(ret, "Couldn't create dev_matrix_in on device");
	dev_matrix_out = clCreateBuffer(context, CL_MEM_READ_WRITE, MATRIX_COLS * MATRIX_COLS * sizeof(cl_int), NULL, &ret);
	checkError(ret, "Couldn't create dev_matrix_out on device");
	
	/* Create kernel program */
	program = build_program(context, device_id, fileName);
	checkError(ret, "Couldn't compile");

	/* Create OpenCL kernel from the compiled program */
	kernel = clCreateKernel(program, "transpose", &ret);
	checkError(ret, "Couldn't create kernel");

	/* Set OpenCL kernel arguments */
	ret = clSetKernelArg(kernel, 0, sizeof(cl_mem), (void *)&dev_matrix_in);
	checkError(ret, "Couldn't set arg dev_matrix_in");
	ret = clSetKernelArg(kernel, 1, sizeof(cl_mem), (void *)&dev_matrix_out);
	checkError(ret, "Couldn't set arg dev_matrix_out");

	/* Get current time before calculating the array with GPU */
	LARGE_INTEGER freq, start;
	QueryPerformanceFrequency(&freq);
	QueryPerformanceCounter(&start);

	/* Write new bit of data to GPU */
	ret = clEnqueueWriteBuffer(command_queue, dev_matrix_in, CL_TRUE, 0, MATRIX_COLS * MATRIX_ROWS * sizeof(cl_int), dataMatrix, 0, NULL, NULL);
	checkError(ret, "Couldn't write array on device");

	size_t globalSize[] = { MATRIX_ROWS * MATRIX_COLS };
	size_t localSize[] = { LOCAL_SIZE };
		
	/* Activate OpenCL kernel on the Compute Device */
	ret = clEnqueueNDRangeKernel(command_queue,
		kernel,
		1,			// 2D array 
		NULL,
		globalSize,
		localSize,
		0,
		NULL,
		NULL);
	checkError(ret, "Could not activate kernel");
		
	clFinish(command_queue);	

	/* Transfer result back to host */
	ret = clEnqueueReadBuffer(command_queue, dev_matrix_out, CL_TRUE, 0, MATRIX_COLS * MATRIX_ROWS * sizeof(int), dataMatrix, 0, NULL, NULL);
	checkError(ret, "Couldn't get data from host");

	/* Get current time after calculating the array on GPU */
	LARGE_INTEGER end;
	QueryPerformanceCounter(&end);

	/* Print first row and first col */
	/*printf("GPU transposed of CPU transposed row: ");
	for (int i = 0; i < MATRIX_COLS; i++)
	{
		printf("%i ", dataMatrix[i]);
	}
	printf("\n");
	printf("GPU transposed of CPU transposed col: ");
	for (int i = 1; i < MATRIX_COLS * MATRIX_ROWS; i++)
	{
		if (i % MATRIX_ROWS == 1)
			printf("%i ", dataMatrix[i - 1]);
	}
	printf("\n\n");*/
	
	/* Print elapsed time */
	printf("Elapsed time CPU: %f msec\n", (double)(endCPU.QuadPart - startCPU.QuadPart) / freqCPU.QuadPart * 1000.0);
	printf("Elapsed time GPU: %f msec\n\n", (double)(end.QuadPart - start.QuadPart) / freq.QuadPart * 1000.0);

	/*	If you transpose a matrix twice, you get the original matrix.
		since we first tranpose a matrix with the CPU to check the time
		and then with the GPU to check the time, the result after the kernel
		should equal the original matrix*/
	bool equal = true;
	for (int i = 1; i < MATRIX_COLS * MATRIX_ROWS; i++)
	{
		if (dataMatrixOriginal[i] != dataMatrix[i])
			equal = false;
	}

	if (equal)
		printf("The transposed of the transposed equals the original, everything went right!\n\n");
	else
		printf("The transposed of the transposed did not equal the original, something went wrong!\n\n");


	/* Blocking to show result */
	printf("Press ENTER to continue...\n");
	getchar();

	/* Finalization */
	ret = clFlush(command_queue);
	ret = clFinish(command_queue);
	ret = clReleaseKernel(kernel);
	ret = clReleaseProgram(program);
	ret = clReleaseMemObject(dev_matrix_in);
	ret = clReleaseMemObject(dev_matrix_out);
	ret = clReleaseCommandQueue(command_queue);
	ret = clReleaseContext(context);
	free(dataMatrix);
	free(dataMatrixOriginal);

	

	return 0;
}