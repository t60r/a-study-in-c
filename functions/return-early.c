#include <stdio.h>

void limit(int stop);

int main() {
	int s;

	printf("Enter a stopping value (1-100): ");
	scanf("%d", &s);
	limit(s);
	return(0);
}

void limit(int stop) {
	int x;

	for(x=0;x<=100;x++) {
		printf("%d ",x);
		if(x==stop) {
			puts("\nYou won!");
			return;
		}
	}
	puts("\nI won!");
}
