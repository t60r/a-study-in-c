#include <stdlib.h>
#include<stdio.h>

int main () {
	unsigned seed;
	
	int r,a,b,range;

	printf("Input a random number seed: ");
	scanf("%u",&seed);
	printf("Input a range: ");
	scanf("%d",&range);
	srand(seed);
	for(a=0;a<20;a++) {
		for(b=0;b<5;b++) {
			r=(rand()%range);
			printf("%d\t",r);
		}
		putchar('\n');
	}
	return(0);
}
