#include <stdio.h>

int main() { 
	char firstname[32];

	printf("What is your name?");
	fgets(firstname,32,stdin);
	printf("Pleased to meet you, %s\n", firstname);
	return(0);
}
