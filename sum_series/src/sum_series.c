// Sum of Series number
// HCMUT - 17/11/2024 - NGUYEN TRONG THANG - 1915244

#include <sum_series.h>

const double EULER_MASCHERONI = 0.57721566490153286060;

//Function calculate factorial
unsigned int factorial(unsigned int num){
	if(num == 1) return 1;
	
	return num * factorial(num-1);
}

// Sum S1 = 1 + 2 + 3 + ... + n 
unsigned int sumS1(unsigned int number) 
{ 
	return (number)*(number+1) / 2;
}

// Sum S2 = 1 + 3 + 5 + ... + 2*n - 1 
unsigned int sumS2(unsigned int number) 
{
	return (number) * (number);
}

// Sum S3 = 2 + 4 + 6 + ... + 2*n 
unsigned int sumS3(unsigned int number) 
{
	return (number) * (number + 1);
}

// Sum S4 = 1 - 2 + 3 -4 + ... +n 
unsigned int sumS4(unsigned int number)
{
	// If number even return number / 2 , odd (return number + 1 )/ 2
	return (number % 2 == 0) ? (number / 2) : (number + 1) / 2;
}


// Sum S5 = 1*2*3*4* ... *n 
unsigned int sumS5(unsigned int number)
{
	if(number == 1) return 1;
	
	// This is factorial number
	return number * sumS5(number-1);
}

// Sum S6 = 1 + 1/2+ 1/3 + 1/4 +... +1/n 
float sumS6(unsigned int number)
{
	return logf(number) * EULER_MASCHERONI;
}

// Sum S7 = 1^2 + 2^2 + 3^2 + ... n^2 
unsigned int sumS7(unsigned int number)
{
	return (number) * (number + 1) * (2*number + 1) / 6;
}

// Sum S8 = 1 + 2^2 + 3^3 + ... n^n 
unsigned int sumS8(unsigned int number)
{
	return (number == 1) ? return 1 : return pow(number, number) + sumS8(number - 1);
}

// Sum S9 = 1 + (1+2) + (1+2+3) + ... + (1+2+3+...+n) 
unsigned int sumS9(unsigned int number)
{
	return (number) * (number + 1) * (number + 2) / 6;
}

// Sum S10 = 1 + 2/(1+2) + 3/(1+2+3) + ... + n/(1+2+3+...+n) 
unsigned int sumS10(unsigned int number)
{
	return (number == 1) ? return 1 : return (number) / ((number)*(number+1) / 2);
}

// Sum S11 = 1! + 2! + 3! + ... + n!
unsigned int sumS11(unsigned int number)
{
	return (number == 1) ? return 1 : return factorial(number, number) + sumS11(number - 1);
}
