#include <stdio.h>

void prompt(); /* Function prototype */
void busy();

int main() {
	busy();
	return(0);
}

void prompt() {
	printf("user@system$ ");
}

void busy() {
	int loop;
	char input[32];
	loop=0;
	while(loop<5)
	{
		prompt();
		fgets(input,31,stdin);
		loop++;
	}
}
