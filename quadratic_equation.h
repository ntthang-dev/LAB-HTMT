// Header file Quadratic Equation
// HCMUT - 17/11/2024 - NGUYEN TRONG THANG - 1915244

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Program find root of equation Ax^2 + Bx + C = 0
void findRoots(int a, int b, int c){
	// If a = 0, equation not quadratic, but linear
	if (a == 0){
		printf("Invalif");	
		return;
	}

	int delta = b*b - 4*a*c; 			// Find delta of equation
	double sqrt_val = sqrt(abs(delta)); // Calculate sqrt of delta
	
	if(delta > 0){
		printf("Roots are real and different \n");
		printf("%f\n%f", (double)(-b + sqrt_val)/(2*a), (double)(-b - sqrt_val)/(2*a));
	} else if (delta == 0) {
		printf("Roots are real and same \n");
		printf("%f", -(double)b/(2*a));
	} else //delta < 0
	{
		printf("Roots are complex \n");
		printf("%f + i%f\n%f - i%f", -(double)b /(2*a), sqrt_val /(2*a), -(double)b/(2*a),sqrt_val /(2*a));
	 } 
}

