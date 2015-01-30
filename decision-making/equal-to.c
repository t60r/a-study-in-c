#include <stdio.h>

#define SECRET 17

int main() {
	int guess;

	printf("Can you guess the secret number?\n");
	printf("Enter your guess: ");
	scanf("%d", &guess);
	if(guess==SECRET) {
		puts("You guessed it! Wow!");
		return(0);
	}
	if(guess!=SECRET) {
		puts("Sorry, incorrect.");
		return(1);
	}
}
