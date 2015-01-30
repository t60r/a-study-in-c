#include <stdio.h>

int main() {
	int foo = 3;
	char name[foo];

	printf("Who are you: \n");
	fgets(name,10,stdin);
	printf("Glad to meet you, '%s'.", name);
	return(0);
}
