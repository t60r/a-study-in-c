#include <stdio.h>

main()
{
	int fahr, celsius;
	int lower, upper, step;
	lower = 0;
	upper = 300;
	step=20;
	
	/* 
	 * 
	 * 
	 * 
	 *
	 * cc file.c
	 * ./a.out
	 *
	 * if you are a pleb. *requires GUHNOO/loonix
	 * */
	celsius=lower;//fahr = 0
	while (celsius <= upper) {
		fahr = ((9 * celsius ) / 5) + 32; //Calculates F2C
		printf("%d\t%d\n", celsius, fahr);
		celsius = celsius + step;
	}
	return 0;
}
