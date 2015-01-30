/*
 * global-variables.c
 * 
 * Copyright 2014 Unknown <foo@dingus>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * Global Variables - These variables can be accessed by all functions
 */


#include <stdio.h>

void half(void);
void twice(void);

int age;
float feet;

int main(int argc, char **argv)
{
	printf("How old are you?: ");
	scanf("%d",&age);
	printf("How tall are you? (in feet): ");
	scanf("%f",&feet);
	printf("You are %d years old and %.1f feet tall\n",
		age, feet);
	half();
	twice();
	printf("But you're not really %d years old or %.1f feet tall",
		age,feet);
	return 0;
}

void half(void) {
	float a,h;	
	a=(float)age/2.0;
	printf("Half your age is %.1f.\n", a);
	h=feet/2.0;
	printf("Half your height is %.1f\n", h);
}

void twice(void) {
	age*=2;
	printf("Twice your age is %d.\n", age);
	feet*=2;
	printf("Twice your height is %.1f\n", feet);
}

