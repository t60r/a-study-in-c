#include <stdio.h>

int main() {
	char name[10];

	printf("Who are you: \n");
	fgets(name,10,stdin);
	printf("Glad to meet you, '%s'.", name);
	return(0);
}
