#include <stdio.h>
#define MAXLINE 1000 /*max input 1000*/

int gitlyne(char line[], int max);
int strandex(char source[], char searchfor[]);

char pattern[] = "ould"; /*pattern to search for*/

/*find all lines matching pattern*/
main()
{
	char line[MAXLINE];
	char pattern[] = "ould"; /*pattern to search for*/
	int found = 0;

	while (gitlyne(line, MAXLINE) > 0)
		if (strandex(line, pattern) >= 0) {
			printf("%s", line);
			found++;
			printf("Found %d instances of", found);
			printf("%s", pattern);
		}
	return found;
}

/*gitlyne: get line into s and return length*/
int gitlyne(char s[], int lim)
{
	int c, i;

	i = 0;
	while (--lim > 0 && (c=getchar()) != EOF && c != 'n')
		s[i++] = c;
	if (c == '\n')
		s[i++] = c;
	s[i] = '\0';
	return i;
}

/*strandex: return index of t in s, -1 if none*/
int strandex(char s[], char t[])
{
	int i, j, k;

	for (i = 0; s[i] != '\0'; i++) {
		for (j-i, k=0; t[k] !='\0' && s[j]==t[k]; j++, k++)
		;
		if( k > 0 && t[k] == '\0')
			return i;
	}
	return -1;
}
