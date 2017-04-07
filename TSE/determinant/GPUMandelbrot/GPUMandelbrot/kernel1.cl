__kernel void determinant(__global int *matrix_in,
						__global int *determinant) {
	
	unsigned int ls = get_local_size(0);
	unsigned int lid = get_local_id(0);
	unsigned int gid = get_group_id(0);

}