#include <stdio.h>

int main() {

	int first, second;

	printf("Input the first value: ");
	scanf("%d", &first);
	printf("Input the second value: ");
	scanf("%d", &second);
	
	puts("Evaluating...");
	if(first<second) {
		printf("%d is less than %d\n", first, second);
	}
	if(second<first) {
		printf("%d is greater than %d\n", first, second);
	}
	return(0);
}
