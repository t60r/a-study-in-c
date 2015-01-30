#include <stdio.h>

int main()
{
	int a;
	int b;
	int c;

	printf("This program will request 3 characters.\n\n");

	printf("Please enter the three characters: ");
	a = getchar();
	b = getchar();
	c = getchar();
	printf("Thank you for entering the characters: '%c','%c', and '%c'\n\n",a, b, c);
	return (0);
}
