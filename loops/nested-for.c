#include <stdio.h>

int main() {
	int a, b;
	for(a='a';a<'g';a++) {
		for(b=1;b<7;b++) {
			printf("%c%d\t", a, b);
		}
		putchar('\n');
	}
	return(0);
}
