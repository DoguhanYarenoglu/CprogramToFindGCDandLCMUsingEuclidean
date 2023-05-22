#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

int main() {
	int num1, num2, gcd, lcm, rem, numerator, denumerator;

	printf("Enter 1'st integer:");
	scanf("%d",&num1);
	printf("Enter 2'nd integer:");
	scanf("%d",&num2);

	if (num1>num2) 
	{
		numerator = num1;
		denumerator = num2;

	}
	else
	{
		numerator = num2;
		denumerator = num1;
	}
	rem = numerator % denumerator;

	while (rem != 0) {
		numerator = denumerator;
		denumerator = rem;
		rem = numerator % denumerator;

	}

	gcd = denumerator;
	lcm = (num1 * num2) / gcd;

	printf("GCD of %d and %d is %d\n",num1,num2,gcd);
	printf("LCM of %d and %d is %d\n", num1,num2,lcm);

	return 0;
}