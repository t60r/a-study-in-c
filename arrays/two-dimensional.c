#include <stdio.h>

/* This program demonstrates multi-dimensional arrays */

int main() {
	char tictactoe [3] [3];
	int x, y;

	/* Initializing matrix */

	for (x=0;x<3;x++)
		for (y=0;y<3;y++)
			tictactoe[x][y]='.';
	tictactoe[1][1] = 'X';

	/* Display Game Board */
	puts("Ready to play Tic-Tac-Toe?");
	for (x=0;x<3;x++) {
		for (y=0;y<3;y++)
			printf("%c\t",tictactoe[x][y]);
		puts("\n");
	}
	puts("...Wait, that was tic-tac-toe?");
	return(0);
}
