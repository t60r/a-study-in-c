#include <stdio.h>

float convert(float f);

int main() {
	float temp_f, temp_c;
	printf("Teperature in Fahrenheit: ");
	scanf("%f", &temp_f);
	temp_c = convert(temp_f);
	printf ("%.1fF is %.1fC\n", temp_f, temp_c);
}

float convert(float f) {
	float t;

	t = (f - 32) / 1.8;
	return(t);
}
