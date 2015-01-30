#include <stdio.h>

#define SIZE 6

int main()
{
	int bubble[] = { 12, 22, 73, 64, 50, 68, 77, 84, 93, 32,20,26};
	int inner, outer, temp,x;

	/* Display original array  */
	puts("Original Array:");
	for(x=0;x<SIZE;x++)
		printf("%d\t", bubble[x]);
	putchar('\n');
	
	/* bubble sort! */

	for(outer=0;outer<SIZE-1;outer++) {
		for(inner=outer+1;inner<SIZE;inner++) {
			if(bubble[outer] > bubble[inner]) {
				temp=bubble[outer];
				bubble[outer] = bubble[inner];
				bubble[inner] = temp;
			}
		}
	}

	/* Display the SORTED array  */

	puts("Sorted Array:");
	for(x=0;x<SIZE;x++)
		printf("%d\t", bubble[x]);
	putchar('\n');

	return(0);
}
