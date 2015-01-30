#include <stdio.h>
#include <math.h>

#define PI 3.14159
#define WAVE 70
#define PERIOD .1

int main () {
	float graph,s,x;

	for(graph=0;graph<PI;graph+=PERIOD) {
		s = cos(graph);
		for(x=0;x<s*WAVE;x++)
			putchar('*');
		putchar('\n');
	}
	return(0);
}
