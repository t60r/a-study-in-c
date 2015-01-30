#include <stdio.h>

#define SIZE 3

int main() {
	char list[SIZE][8] = {
		"foo",
		"bar",
		"baz",
	};
	int x,index;

	for(x=0;x<SIZE;x++){
		index = 0;
		while(list[x][index] != '\0') {
			putchar(list[x][index]);
			index++;
		}
		putchar('\n');
	}
	return(0);
}
