#include <stdio.h>
/* This program demonstrates the use of a switch() without
 * the use of any break; statements
 *
 * It will ececute from the first match, all the way down, unless default.
 * */
int main() {
	char choice;
	
	puts("A - Breakfast, Lunch and Dinner");
	puts("B - Lunch and Dinner");
	puts("C - Dinner");
	printf("Your choice: ");
	scanf("%c", &choice);
	if (choice == 'a') {
		choice = 'A';
	}
	else if (choice == 'b') {
		choice = 'B';	
	}
	else if (choice == 'c') {
		choice = 'C';
	}
	else {
		printf("Thank you for entering a capital letter!\n");	
	}
	printf("You've opted for ");
	switch(choice) {
		case 'A' :
			printf("Breakfast, ");
		case 'B':
			printf("Lunch and ");
		case 'C':
			printf("Dinner ");
		default:
			printf("as your meal plan.\n");
	}
	return(0);
}
