#include <stdio.h>

#define SIZE 5

void showarray(int array[]);

int main() {
	int n[] = {1,2,3,4,5};

	puts("Here is the array!");
	showarray(n);
	return(0);
}

void showarray(int array[]) {
	int x;

	for(x=0;x<SIZE;x++)	
		printf("%d\t", array[x]);
	putchar('\n');
}
