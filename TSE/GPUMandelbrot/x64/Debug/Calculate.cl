__kernel void Calculate(
	__global float* PARAMS,
	__global mandelbrot_color* framebuffer,
	__global const mandelbrot_color* colortable
)
{
	/*
		PARAMS[0] = stepsize;
		PARAMS[1] = window_width
		PARAMS[2] = window_height
		PARAMS[3] = x0
		PARAMS[4] = y0
		PARAMS[5] = max_iterations
	*/
	
	float windowPosX;
	float windowPosY;
	
	float center_X = -(PARAMS[0]*PARAMS[1]/2);
	float center_Y = (PARAMS[0]*PARAMS[2]/2);
	const float stepPosX = center_X - PARAMS[3] + (windowPosX * PARAMS[0]);
	const float stepPosY = center_Y + PARAMS[4] - (windowPosY * PARAMS[0]);

	// Variables for the calculation
	float x = 0.0;
	float y = 0.0;
	float xSqr = 0.0;
	float ySqr = 0.0;
	unsigned int iterations = 0;

	// Perform up to the maximum number of iterations to solve
	// the current pixel's position in the image
	
	while (	(xSqr + ySqr < 4.0) && (iterations < PARAMS[5]))
	{
		// Perform the current iteration
		xSqr = x*x;
		ySqr = y*y;

		y = 2*x*y + stepPosY;
		x = xSqr - ySqr + stepPosX;

		// Increment iteration count
		iterations++;
	}
	// Output black if we never finished, and a color from the look up table otherwise
	mandelbrot_color black = {0,0,0};
	framebuffer[(PARAMS[1] * windowPosY + windowPosX)] = (iterations == PARAMS[5])? black : colortable[iterations];
}
