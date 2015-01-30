#include <stdio.h>
//this is a test
int main(){//this is also a test
	char name[20];
	char color[20];

	printf("What is your name?");
	scanf("%s", name);
	printf("What is your favorite color?");
	scanf("%s", color);
	printf("%s's favorite color is %s.\n", name, color);
	return(0);
}
