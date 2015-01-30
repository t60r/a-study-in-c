#include <stdio.h>

int main() {
	int fib, nac;
	fib = 0;
	nac = 1;

	do {
		printf("%d\n", fib);
		fib = fib + nac;
		printf("%d\n", nac);
		nac = nac + fib;
	} while (nac < 300 );
	putchar('\n');
	return(0);
}
