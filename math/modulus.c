#include <stdio.h>

#define VALUE 5

int main() {
	int a;

	printf("Modulus %d:\n", VALUE);
	for(a=0;a<30;a++)
		printf("%d %% %d = %d\n",a,VALUE,a%VALUE);
	return(0);
}
