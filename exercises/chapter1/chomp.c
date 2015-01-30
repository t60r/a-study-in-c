#include <stdio.h>

main()
{
	int c;
	int b;
	b = 0; /*
	state 0 = regular print
	state 1 = print add space
	*/
	while ((c = getchar()) != EOF)
		if ( c == ' ')
			++b;
		else if (b > 0)
			putchar(c);
			printf(" ");
		if (c != ' ')
			putchar(c);
			b = 0;
	return 0;
}
