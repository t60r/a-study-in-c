#include <stdio.h>

int main () {
	char prompt[] = "Press enter for fork bomb: ";

	printf("%s", prompt);
	getchar();
	return;
}
