#include <stdio.h>

main()
{
	int fahr, celsius;
	int lower, upper, step;
	lower = 0;
	upper = 300;
	step=20;
	
	/* This function prints a tabbed
	 * and li\ne returned list
	 * of celsius as related to
	 * fahrenheit from 0 C to 300 C
	 *
	 * cc file.c
	 * ./a.out
	 *
	 * if you are a pleb. *requires GUHNOO/loonix
	 * */
	fahr=lower;//fahr = 0
	while (fahr <= upper) {
		celsius = 5 * (fahr-32) / 9; //Calculates C2F
		printf("%d\t%6d\n", fahr, celsius);
		fahr = fahr + step;
	}
	return 0;//Makes happy, even if broken ;)
			 //That is, if it makes it here...
}
