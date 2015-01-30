#include <stdio.h>
#include <ctype.h>

int main() {
	char phrase[] = "The rain it raineth on the just And also on the unjust fella. But chiefly on the just, because The unjust steals the just's umbrella.";

	int index,alpha,blank,punct,lower,upper,print;

	alpha = blank = punct = lower = upper = print = 0;

	/* gather data */
	index = 0;
	while(phrase[index]) {
		if(isalpha(phrase[index]))
			alpha++;
		if(isblank(phrase[index]))
			blank++;
		if(ispunct(phrase[index]))
			punct++;
		if(isupper(phrase[index]))
			upper++;
		if(islower(phrase[index]))
			lower++;
		if(isprint(phrase[index]))
			print++;
		index++;
	}

	/* Print results */
	printf("\"%s\"\n", phrase);
	printf("Statistics:\n");
	printf("%d alphabetic characters\n", alpha);
	printf("%d blanks\n", blank);
	printf("%d punctiation sumbols\n", punct);
	printf("%d lower case characters\n", lower);
	printf("%d upper case characters\n", upper);

	return(0);
}

