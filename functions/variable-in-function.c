#include <stdio.h>

void vegas(void);

int main() {
	int a;

	a = 365;
	printf("In the main function, a=%d\n", a);
	vegas();
	printf("In the main function, a=%d\n", a);
	return(0);
}

void vegas(void) {
	int a;
	a = -10;
	printf("In the vegas function, a=%d\n", a);
}
