#include <stdio.h>

int main () {
	int highscore[4];
	int x;

	for(x=0;x<4;x++) {
		printf("Your #%d score: ", x+1);
		scanf("%d", &highscore[x]);
	}

	puts("Here are your scores.");
	for (x=0;x<4;x++)
		printf("#%d %d\n", x+1, highscore[x]);
	return(0);
}
