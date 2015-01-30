#include <stdio.h>

/* This program demonstrates a three-dimensional array */

int main() {
	char ttt[3][3][3];
	int x,y,z;

	/* Initialize */
	for(x=0;x<3;x++)
		for(y=0;y<3;y++)
			for(z=0;z<3;z++)
				ttt[x][y][z]='.';
	ttt[1][1][1] = 'X';

	/* Display */
	puts("Would you care to play a game?\n");
	puts("Too bad, here is a BUNCH of text\n");
	for(z=0;z<3;z++) {
		ttt[1][1][1] = 'X';
		printf("Level %d\n", z+1);
		for(x=0;x<3;x++) {
			for(y=0;y<3;y++)
				printf("%c\t", ttt[x][y][z]);
			putchar('\n');
		}
	}
	return(0);
}
