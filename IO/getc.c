#include <stdio.h>

main() {
	int c;
	printf("Enter a character: ");
	c = getc(stdin);	
	/* technically, getchar() is a macro
	 * and not a function.  The above is
	 * what it is actually performing. */
	printf("You have entered: '%c'\n",c);
	printf("Also, this program is otherwise useless.");
	return (0);
}
