#include <stdio.h>

void graph(int count);

int main() {
	int value;

	value = 2;

	while(value<=64) {
		graph(value);
		printf("Value is %d\n", value);
		value = value * 2;
	}
	return(0);
}

void graph(int count) {
	int x;

	for(x=0; x<count; x++)
		putchar('*');
	putchar('\n');
}
