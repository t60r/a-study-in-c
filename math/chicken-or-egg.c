#include <stdio.h>

int main() {
	int a,b;

	b=16;
	printf("Before, a is unnasigned and b=%d\n", b);
	a=b++;
	printf("After, a=%d and b=%d\n",a,b);
	/* as you can see, the = operator takes presedednce over the ++ operator */
	return(0);
}
