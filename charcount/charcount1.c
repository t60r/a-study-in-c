#include <stdio.h>

/* count characters in input; 1st version */

main()
{
	long nc;

	nc = 0;
	while(getchar() != EOF)
		++nc;
	printf("%1d\n", nc);
	return 0;
}
