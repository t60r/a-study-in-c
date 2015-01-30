#include <stdio.h>
#include <string.h>

/* * * * * * * * * * * * * * * * * *
 * This program matches an input   * 
 * string to a password .          *
 * * * * * * * * * * * * * * * * * */
 
int main() {
	char password[]="taco";
	char input[15];

	printf("Password: ");
	scanf("%s", input);
	if(strcmp(input, password)==0)
		printf("Password accepted\n");
	else
		printf("Invalid password.  Calling internet police.");
	return (0);
}
