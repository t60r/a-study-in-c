#include <stdio.h>
#include <stdlib.h>	//for atof() s
#include <ctype.h>

#define MAXOP 100 	//max sixe of operand
#define NUMBER '0'	//signal that the number was found
#define BUFSIZE 100 //buffer size for ungetch

int getop(char[]);	//gets next character or operand
void push(double);
double pop(void);
int getch(void);	//notice the opposites
void ungetch(int);	//<-- this
char buf[BUFSIZE];
int bufp = 0;		//next free position in the buffer


 /***************************
 * Reverse polish calculator*
 ****************************/
 

 /* Some pocket calculators and
  * obscure c exercises use the
  * reverse polish input method
  * for calculation. see below
  * (1 + 1) * (2 - 2) 
  * would be the below in polish
  * 11+22-*
  */
main(int argc, char **argv){
	int type;
	double op2;
	char s[MAXOP];

	while ((type = getop(s)) != EOF) {
		switch(type) {
		case NUMBER:
			push(atof(s));
			break;
		case '+':
			push(pop() + pop());
			break;
		case '*':
			push(pop() * pop());
			break;
		case '-':
			op2 = pop();
			push(pop() - op2);
			break;
		case '/':
			op2 = pop();
			if (op2 != 0.0)
				push(pop() / op2);
			else
				printf("Error: you divided by zero dummy.");
			break;
		case '\n':
			printf("\t%.8g\n", pop());
			break;
		default:
			printf("Error: Your argument is invalid.");
		}
	}
	return 0;
}

#define MAXVAL 100		//max depth of stack

int sp = 0;				//next free stack position
double val[MAXVAL];		//value stack

//push: push f onto value stack
void push(double f){
	if (sp < MAXVAL){
		val[sp++] = f;
	} else {
		printf("Error: stack full, can't push %g\n", f);
	}
}

//pop: pop and return the value from the stack
double pop(void){
	if (sp > 0) { 
		return val[--sp];
	} else {
		printf("Error: Danger Will Robinson! Stack Empty!");
		return 0.0;
	}
}

//getop: get next character or numeric operand
int getop(char s[]){
	int i, c;
	while ((s[0] = c = getch()) == ' ' || c == '\t'){
		;
	s[1] = '0';
	if (!isdigit(c) && c != '.') {
		return c; 	//not a number
	i = 0;
	}
	if (isdigit(c)){
		while (isdigit(s[++i] = c =  getch())) {
			;
			}
	s[i] = '\0';
	}
	if (c != EOF) {
		ungetch(c);
		}
	}
	return NUMBER;
}

//get a (possibly pushed back) character

int getch(void){ 
	return (bufp > 0) ? buf[--bufp]	: getchar();
}

//push back to input
void ungetch(int c){ 
	if (bufp >= BUFSIZE){
		printf("ungetch: too boo koo\n.");
	} else {
		buf[bufp++] = c;
	}
}

