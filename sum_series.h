// Sum of Series number
// HCMUT - 17/11/2024 - NGUYEN TRONG THANG - 1915244

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Function calculate factorial
unsigned int factorial(unsigned int num){
	if(num == 1) return 1;
	
	return num * factorial(num-1);
}

// Program sum all Series from S1 -> S11
void sumSeries(int n){
	
	int i, tmp, sum;
	 
	// Sum S1 = 1  + 2 + 3 + ... + n
	for(sum = 0, i = 1; i <= n; i++) sum+=i; // sum  = sum + i
	printf("S1 = 1 + 2 + 3 + ... +%f = ",&n);
	printf("%f\n",sum);
	
	// Sum S2 = 1 + 3 + 5 + ... + 2*n - 1
	for (sum = 0, i = 1; i <= (2*n - 1); i + 2) sum+=i;
	printf("S2 = 1 + 3 + 5 + ... +2*n - 1 = ",n);
	printf("%d\n", sum);
	
	//Sum S3 = 2 + 4 + 6 + ... + 2*n
	for(sum = 0, i = 2; i <= (2*n); i + 2)sum+=i;
	printf("S3 = 2 + 4 + 6 + ... +2*n = ",n);
	printf("%d/n", sum);
	
	//Sum S4 = 1 - 2 + 3 -4 + ... +n
	for(sum = 0, i = 1; i <= n; i++)sum-=pow(-1,i)*i;
	printf("S4 = 1 - 2 + 3 -4 + ... + %f = ",n);
	printf("%f\n", sum);
	
	//Sum S5 = 1*2*3*4* ... *n
	for(sum = 0, i = 1; i <= n; i++) sum*=i;
	printf("S5 = 1*2*3*4* ... * %f = ",n);
	printf("%f\n", sum);
	
	double sum, i;
	//Sum S6 = 1 + 1/2+ 1/3 + 1/4 +... +1/n
	for(sum = 0, i= 1; i <= n; i++) sum+=(double) (1/i);
	printf("S6 = 1*2*3*4* ... * %f = ",n);
	printf("%f\n", sum);
	
	//Sum S7 = 1^2 + 2^2 + 3^2 + ... n^2
	for(sum = 0, i = 1; i <= n; i++) sum+=i*i;
	printf("S7 = 1^2 + 2^2 + 3^2 + ... + %f^2",n);
	printf("%f\n", sum);
	
	//Sum S8 = 1 + 2^2 + 3^3 + ... n^n
	for(sum = 0, i = 1; i <= n; i++) sum+=pow(i,i);
	printf("S8 = 1 + 2^2 + 3^3 + ... %d^%d",n,n);
	printf("%f\n", sum);
	
	//Sum S9 = 1 + (1+2) + (1+2+3) + ... + (1+2+3+...+n)
	for(tmp= 0, sum = 0, i = 1; i <= n; i++) {
		tmp+=i;
		sum+=tmp;
	}
	printf("S9 = 1 + (1+2) + (1+2+3) + ... + (1+2+3+...+%d)",n);
	printf("%d\n", sum);
	
	//Sum S10 = 1 + 2/(1+2) + 3/(1+2+3) + ... + n/(1+2+3+...+n)
	for(tmp= 0, sum = 0, i = 1; i <= n; i++) {
		tmp+=i;
		(double)sum+=(double)(i/tmp);
	}
	printf("S10 = 1 + 2/(1+2) + 3/(1+2+3) + ... + %d/(1+2+3+...+%d)",n,n);
	printf("%f\n", sum);
	
	//Sum S11 = 1! + 2! + 3! + ... + n!
	for(sum = 0, i = 1; i <= n; i++) sum+=factorial(i); 
	printf("S11 = 1! + 2! + 3! + ... + %d!",n);
	printf("%d\n", sum);
}
