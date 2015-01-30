#include <stdio.h>

char *binbin(int n);

int main(int argc, char **argv)
{
	int first,second,third,fourth;
	
	printf("Enter the first octet: ");
	scanf("%d", &first);
	printf("Enter the second octet: ");
	scanf("%d",&second);
	printf("Enter the third octet: ");
	scanf("%d",&third);
	printf("Enter the fourth octet: ");
	scanf("%d",&fourth);
	printf("%s.", binbin(first));
	printf("%s.", binbin(second));
	printf("%s.", binbin(third));
	printf("%s\n", binbin(fourth));
	return 0;
}

char *binbin(int n) {
	static char bin[9];
	int x;
	
	for(x=0;x<8;x++) {
		bin[x] = n & 0x80 ? '1' : '0';
		n <<=1;
	}
	bin[x] = '\0';
	return(bin);
}
