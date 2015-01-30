#include <stdio.h>

int main() {
	char firstname[15];
	
	printf("Enter your first name: ");
	scanf("%s", firstname);
	printf("Nice to meet you, %s.\n", firstname);
	return(0);
}
