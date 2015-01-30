#include <stdio.h>

/* This program will count tabs blank spaces and newline characters*/


main()
{
	int BLANKS, TABS, NEWLINES, other = 0;
	int c;
	while(c = getchar() != EOF)
		if(c = " "){
			++BLANKS;
		}
		if(c == '\t'){
			++TABS;
		}
		if(c == '\n'){
			++NEWLINES;
		}
		else
			++other;
	printf("There are %d", BLANKS);
	printf(" blanks, %d tabs, and ", TABS);
	printf("%d newline characters.\n", NEWLINES);
}

