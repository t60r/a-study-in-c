#include <stdio.h>

main()
{
	int c;

	while ((c = getchar()) != EOF)
		putchar(c);
		if (c == EOF)
			printf("The value of EOF is %d\n", c); /*this should print the value of EOF*/
}
