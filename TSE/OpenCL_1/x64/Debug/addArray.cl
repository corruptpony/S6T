__kernel void addArray
       (__global float* A, 
        __global float* B, 
        __global float* C
       )
{
	int w = get_local_size(0);
	int i = get_group_id(0);
	int	j = get_local_id(0);
    C[i*w+j] = A[i*w+j] + B[i*w+j];
}
