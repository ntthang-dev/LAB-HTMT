// Check number
// HCMUT - 17/11/2024 - NGUYEN TRONG THANG - 1915244

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

// Check Prime Number if true return 1 else return 0
bool isPrime(int n){
	
	int i;
	
	// Check if n is 1 or 0
	if (n <= 1) return false;
	
	// Check if n is 2 or 3
	if(n == 2 || n == 3) return true;
	
	// Check whether n is divisible by 2 or 3
	if(n % 2 == 0 || n % 3 == 0) return false;
	
	// Check from n = 5 to square root of n , iterate i by (i+6)
	for (i = 5; i <= sqrt(n); i+=6)
		if(n % i == 0 || n % (i + 2) == 0) return false;
	
	return true;
}

bool isPerfectSquare(int n){
	 // Basic algorithm
//	if (((double)sqrt(n) - (int)(sqrt(n))) > 0) return false;
//	return true;
	
	if(n == 0) return true;
	
	long long odd = 1;
	while(n > 0){
		n -= odd;
		odd += 2;
	}
	
	return (n == 0)?: true;
}


