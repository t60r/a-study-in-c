#include <stdio.h>

#define IN	1
#define OUT	0

/*count lines, words, and characters in input*/

main()
{
	int c, nl, nw, nc, state;
	state = OUT;
	nl = nw = nc = 0;
	while ((c = getchar()) != EOF) {
		++nc;
		putchar(c);
	if (c == '\n')
		++nl;
	if (c == ' ' || c == '\n' || c == '\t')
		state = OUT;
		printf(" ");
	else if (state == OUT)
		state = IN;
		++nw;
		
	}
	printf("%d lines\n%d words\n%d characters\n", nl, nw, nc);
}
