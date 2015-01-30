#include <stdio.h>

/* This program demonstrates a few builting math functions of C.
 * sqrt() = returns square root of a floating-point value
 * pow() = returns the result of a floating point value raised to
 * 		a certain power
 * abs() = returns tha absolute value (positive) of an integer
 * floor() = rounts up a float to the next int
 * ceil() = rounds down a float to the nearest int
 * */
#include <math.h>

int main() {
	float result, value;

	printf("Input a float value: ");
	scanf("%f", &value);
	result = sqrt(value);
	printf("The square root of %.2f is %.2f\n",value, result);
	result = pow(value, 3);
	printf("%.2f to the 3rd power is %.2f\n",value, result);
	result = floor(value);
	printf("The floor of %.2f is %.2f\n",value, result);
	result = ceil(value);
	printf("The ceiling of %.2f is %.2f\n,",value, result);
	return(0);
}

