#include <ctype.h>

int atoi(char s[])/*converts strings to integers, for fun. Requires a main loop.*/
{
	int i, n, sign;

	for (i = 0; isspace(s[i]); ++i) /*skips whitespace*/
		;
	sign = (s[i] == '+' || s[i] == '-') /*skip sign*/
		++i;
	for(n = 0; osdigit(s[i]); ++i)
		n = 10 * n + (s[i] - '0');
	return sign * n
}
