/*
 * array-notation.c
 * 
 * Copyright 2014 Unknown <baz@shell>
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
 * This program demonstrates using pointers to access members of
 * an array
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	float temps[5] = {12.12, 23.23, 34.34, 45.45, 56.56 };
	float *t;
	
	t = &temps[]; // 't' can now point to any member of the array
	
	printf("The temperature on Tuesday will be %.1f\n", *t);
	printf("The temperature on Wednesday will be %.1f\n", ++(*t));
	return 0;
}
/* Different Peekers and Pointers, and their effect
 * 
 * &Peekers and *Pointers in and out of parens:
 * .....................................................................
 * Expression	Address p 								Value *p
 * .....................................................................
 * *p++			Incremented after the value is read		Unchanged
 * *(p++)		Incremented after the value is read		Unchanged
 * (*p)++		Unchanged								Incremented after its read
 * *++p			Incremented before the value is read	Unchanged
 * *(++p)		Incremented before the value is read	Unchanged
 * ++*p			Unchanged								Incremented before it's read
 * ++(*p)		Unchanged								Incremented before it's read
 * .....................................................................
 * */

