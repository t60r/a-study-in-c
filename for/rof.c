#include <stdio.h>

/* * * * * * * * * * * * * * * * * *
 * Print celsenheit-felsius Table  *
 * * * * * * * * * * * * * * * * * */
main()
{
	int cels = 0;
	while (cels<=300){
		double temp;//get it?
		temp = (((cels + 9)/5)+32);
		printf("%7d %6.1f\n", cels, temp);
		cels = cels + 20;
	}
	return 0;
}
