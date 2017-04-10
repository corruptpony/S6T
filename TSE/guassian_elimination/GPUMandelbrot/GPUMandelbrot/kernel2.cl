__kernel void gaussianElimination(__global float *mat,
									__local float* matRow) {
	
	unsigned int ls = get_local_size(0);
	unsigned int lid = get_local_id(0);
	unsigned int gid = get_group_id(0);

	for (int diagNr = 0; diagNr < ls - 1; diagNr++)
	{
		// Copy floats from Global to Local memory
		matRow[lid] = mat[diagNr * ls + lid];

		barrier(CLK_LOCAL_MEM_FENCE);

		if(gid > 0)
		{
			if (mat[((diagNr + gid) * ls) + diagNr] == 0 || diagNr + gid > ls - 1)
				continue;

			if (matRow[diagNr] != 1)
			{
				matRow[lid] = matRow[lid] / matRow[diagNr];
			}

			barrier(CLK_LOCAL_MEM_FENCE);

			if (mat[(diagNr * ls) + diagNr] != mat[((diagNr + gid) * ls) + diagNr])
			{
				matRow[lid] = matRow[lid] * mat[((diagNr + gid) * ls) + diagNr];
			}

			barrier(CLK_LOCAL_MEM_FENCE);

			mat[((diagNr + gid) * ls) + lid] = mat[((diagNr + gid) * ls) + lid] - matRow[lid];

			barrier(CLK_GLOBAL_MEM_FENCE);
		}
	}
}