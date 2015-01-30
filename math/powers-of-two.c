#include <stdio.h>
#include <math.h>

#define BASE 2

int powerit(int foo);

int main () {
	printf("Here are the powers of 2, 0-10.\n");
	int x;
	int result;
	for(x=1;x<=10;x++) {
		printf("Two to the power of %d is %d\n",x,powerit(x));
	}
	return(0);
}

int powerit (int foo) {
	int bar;
	bar = pow(BASE,foo);
	return bar;
}


