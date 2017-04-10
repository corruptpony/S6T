__kernel void determinant(__global float *mat,
						__global long long *determinant) {
	*determinant = 1;
	unsigned int ls = get_local_size(0);
	unsigned int lid = get_local_id(0);
	unsigned int gid = get_group_id(0);

	for (int diagNr = 0; diagNr < ls - 1; diagNr++)
	{
		for (int rowNr = 1; rowNr < (ls - diagNr); rowNr++)
		{
			if (mat[((diagNr + rowNr) * ls) + diagNr] == 0)
				continue;

			float division = 1.0;
			if (mat[(diagNr * ls) + diagNr] != 1)
			{
				division = mat[(diagNr * ls) + diagNr];
				mat[(gid * ls) + lid] = mat[(gid * ls) + lid] / division;
			}

			float multiply = 1.0;
			if (mat[(diagNr * ls) + diagNr] != mat[((diagNr + rowNr) * ls) + diagNr])
			{
				multiply = mat[((diagNr + rowNr) * ls) + diagNr];
				mat[(gid * ls) + lid] = mat[(gid * ls) + lid] * multiply;
			}

			mat[((diagNr + rowNr) * ls)] = mat[((diagNr + rowNr) * ls)] - mat[(gid * ls) + lid];

			if (multiply != 1)
			{
				mat[(gid * ls) + lid] = mat[(gid * ls) + lid] / multiply;
			}
			if (division != 1)
			{
				mat[(gid * ls) + lid] = mat[(gid * ls) + lid] * division;
			}
		}
	}
}