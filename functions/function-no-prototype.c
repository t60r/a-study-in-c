#include <stdio.h>

void prompt() {
	printf("foo@dingus ~>");
}
/* Since the compiler will see this first, it will already 
*  be aware of the prompt() function.
* */ 

int main() {
	int loop;
	char input[32];

	loop=0;
	while(loop<5)
	{
		prompt();
		fgets(input,31,stdin);
		loop++;
	}
	return(0);
}
