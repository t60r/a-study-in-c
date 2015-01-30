#include <stdio.h>

int main() {
	int count;
	while(1) {
		printf("%d ", count);
		count++;
		/* * * * * * * * * * * * * ** * * * * * * * * * * * * * *
		 * Notice the lack of {} brackets on the if..			*
		 * this is because only one statement will be executed  *
		 * if the condition is true 							*			
		 * * * * * * * * * * * * * ** * * * * * * * * * * * * * */
		if( count > 50)
			break;
	}
	putchar('\n');
	return (0);
}
