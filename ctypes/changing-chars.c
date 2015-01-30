#include <stdio.h>
#include <ctype.h>

int main() {
	char answer;

	printf("Would you like to blow up the moon? (Y/N): \n");
	scanf("%c", &answer);
	answer = toupper(answer);
	if(answer=='Y')
		printf("Boom");
	else if (answer=='N')
		printf("No boom.\n");
	else
		printf("You entered a bad character.");
	return(0);
}
