#include <stdio.h>
#include <math.h>

int main () {
	float degrees, radians;

	printf("Enter an angle in degrees: ");
	scanf("%f",&degrees);
	radians = 0.0174532925*degrees;
	printf("%.2f degrees is %.2f radians.\n",degrees,radians);
	return(0);
}
