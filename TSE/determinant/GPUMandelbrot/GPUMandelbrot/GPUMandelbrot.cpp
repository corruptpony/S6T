#define _CRT_SECURE_NO_WARNINGS
#define _SCL_SECURE_NO_WARNINGS

#include "opencl_utils.h"
#include <windows.h>
#include <stdio.h>
#include <iostream>
#include <CL/cl.h>
#include <stdlib.h>

float* dataMatrix;
bool printDebug = false;

/* Parameters for testing */
char fileName[] = "./kernel2.cl";
const int MATRIX_SIZE = 512; /* Matrix needs to be square */
const int LOCAL_SIZE = MATRIX_SIZE;

float getLocation(int y, int x)
{
	return dataMatrix[(y * MATRIX_SIZE) + x];
}

void setLocation(int y, int x, float value)
{
	dataMatrix[(y * MATRIX_SIZE) + x] = value;
}

void divideRow(int y, float value)
{
	for (int col = 0; col < MATRIX_SIZE; col++)
	{
		setLocation(y, col, getLocation(y, col) / value);
	}
}

void multiplyRow(int y, float value)
{
	for (int col = 0; col < MATRIX_SIZE; col++)
	{
		setLocation(y, col, getLocation(y, col) * value);
	}
}

void substractRow(int substractRow, int fromRow)
{
	for (int col = 0; col < MATRIX_SIZE; col++)
	{
		float newValue = getLocation(fromRow, col) - getLocation(substractRow, col);
		setLocation(fromRow, col, newValue);
	}
}

long long getDet()
{
	long long det = 1.0;
	for (int diag = 0; diag < MATRIX_SIZE; diag++)
	{
		det *= (long long)getLocation(diag, diag);
	}
	return det;
}

void printMatrix(bool print)
{
	/* Print matrix */
	if (print)
	{
		printf("Matrix:\n");
		for (int i = 1; i < (MATRIX_SIZE * MATRIX_SIZE) + 1; i++)
		{
			printf("%f ", dataMatrix[i - 1]);
			if (i % MATRIX_SIZE == 0)
				printf("\n");
		}
		printf("\n");
	}
}


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
	cl_mem dev_det;

	/* declare mem for matrix */
	dataMatrix = (float*)malloc(sizeof(float) * MATRIX_SIZE * MATRIX_SIZE);

	/* Fill matrix with test data */
	for (int i = 0; i < MATRIX_SIZE * MATRIX_SIZE; i++)
	{
		dataMatrix[i] = (float)(rand() % 9) + 1.0;
	}
	
	printMatrix(printDebug);

	/* Get current time before calculating the array with CPU */
	LARGE_INTEGER freqCPU, startCPU, endCPU;
	QueryPerformanceFrequency(&freqCPU);
	QueryPerformanceCounter(&startCPU);

	/* Determinant with the CPU */	
	/* Iterate over every diagonal of the square matrix except the last one */
	for (int diagNr = 0; diagNr < MATRIX_SIZE - 1; diagNr++)
	{
		/* Iterate over every row under the starting point */
		for (int rowNr = 1; rowNr < (MATRIX_SIZE - diagNr); rowNr++)
		{
			if (getLocation(diagNr + rowNr, diagNr) == 0)
				continue;

			float division = 1;
			if (getLocation(diagNr, diagNr) != 1)
			{
				division = getLocation(diagNr, diagNr);
				divideRow(diagNr, division);
			}

			printMatrix(printDebug);

			float multiply = 1;
			if (getLocation(diagNr, diagNr) != getLocation(diagNr + rowNr, diagNr))
			{
				multiply = getLocation(diagNr + rowNr, diagNr);
				multiplyRow(diagNr, multiply);
			}

			printMatrix(printDebug);

			substractRow(diagNr, diagNr + rowNr);

			printMatrix(printDebug);

			/* Restore the row to it's original form */
			if (multiply != 1)
				divideRow(diagNr, multiply);
			if (division != 1)
				multiplyRow(diagNr, division);

			printMatrix(printDebug);
		}
	}

	long long det = getDet();

	/* Get current time after calculating the array with CPU */
	QueryPerformanceCounter(&endCPU);

	printMatrix(false);
	printf("Determinant of matrix: %lli\n\n", det);

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
	dev_matrix_in = clCreateBuffer(context, CL_MEM_READ_WRITE, MATRIX_SIZE * MATRIX_SIZE * sizeof(cl_float), NULL, &ret);
	checkError(ret, "Couldn't create dev_matrix_in on device");
	dev_det = clCreateBuffer(context, CL_MEM_READ_WRITE, sizeof(long long), NULL, &ret);
	checkError(ret, "Couldn't create dev_matrix_out on device");
	
	/* Create kernel program */
	program = build_program(context, device_id, fileName);
	checkError(ret, "Couldn't compile");

	/* Create OpenCL kernel from the compiled program */
	kernel = clCreateKernel(program, "determinant", &ret);
	checkError(ret, "Couldn't create kernel");

	/* Set OpenCL kernel arguments */
	ret = clSetKernelArg(kernel, 0, sizeof(cl_mem), (void *)&dev_matrix_in);
	checkError(ret, "Couldn't set arg dev_matrix_in");
	ret = clSetKernelArg(kernel, 1, sizeof(cl_mem), (void *)&dev_det);
	checkError(ret, "Couldn't set arg dev_matrix_out");

	/* Get current time before calculating the array with GPU */
	LARGE_INTEGER freq, start;
	QueryPerformanceFrequency(&freq);
	QueryPerformanceCounter(&start);

	/* Write new bit of data to GPU */
	ret = clEnqueueWriteBuffer(command_queue, dev_matrix_in, CL_TRUE, 0, MATRIX_SIZE * MATRIX_SIZE * sizeof(cl_float), dataMatrix, 0, NULL, NULL);
	checkError(ret, "Couldn't write array on device");

	size_t globalSize[] = { MATRIX_SIZE * MATRIX_SIZE };
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

	long long result = 0;

	/* Transfer result back to host */
	ret = clEnqueueReadBuffer(command_queue, dev_matrix_in, CL_TRUE, 0, MATRIX_SIZE * MATRIX_SIZE * sizeof(float), dataMatrix, 0, NULL, NULL);
	checkError(ret, "Couldn't get matrix from host");
	ret = clEnqueueReadBuffer(command_queue, dev_det, CL_TRUE, 0, sizeof(long long), &result, 0, NULL, NULL);
	checkError(ret, "Couldn't get determinant from host");

	/* Get current time after calculating the array on GPU */
	LARGE_INTEGER end;
	QueryPerformanceCounter(&end);
	
	printMatrix(false);
	printf("Determinant of matrix: %lli\n\n", result);

	/* Print elapsed time */
	printf("Elapsed time CPU: %f msec\n", (double)(endCPU.QuadPart - startCPU.QuadPart) / freqCPU.QuadPart * 1000.0);
	printf("Elapsed time GPU: %f msec\n\n", (double)(end.QuadPart - start.QuadPart) / freq.QuadPart * 1000.0);

	/* Blocking to show result */
	printf("Press ENTER to continue...\n");
	getchar();

	/* Finalization */
	ret = clFlush(command_queue);
	ret = clFinish(command_queue);
	ret = clReleaseKernel(kernel);
	ret = clReleaseProgram(program);
	ret = clReleaseMemObject(dev_matrix_in);
	ret = clReleaseMemObject(dev_det);
	ret = clReleaseCommandQueue(command_queue);
	ret = clReleaseContext(context);
	free(dataMatrix);

	return 0;
}