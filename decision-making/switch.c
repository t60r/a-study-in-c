#include <stdio.h>

int main () {
	int code;

	printf("Enter the error code (1-3): ");
	scanf("%d", &code);

	switch(code) {
		case 1:
			puts("Drive fault, not yours. No danger to Will Robinson");
			break;
		case 2:
			puts("Illegal format, call lawyer.");
			break;
		case 3:
			puts("Bad filename, naughty file!");
			break;
		default:
			puts("That wasn't 1, 2, or 3");
	}
	return(0);
}
