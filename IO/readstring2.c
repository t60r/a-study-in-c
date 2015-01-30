#include <stdio.h>

int main() {
	char firstname[15];
	char lastname[15];
	printf("Enter your first name: ");
	scanf("%s", firstname);	
	printf("Enter your first last: ");
	scanf("%s", lastname);
	printf("Nice to meet you, %s %s.\n", firstname, lastname);
	printf("Is that your real name?");
	return(0);
}
