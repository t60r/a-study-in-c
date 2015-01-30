/*
 * head-imploder.c
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
 * The Head Imploder
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	char alpha = 'A';
	int x;
	char *pa;
	
	pa = &alpha;
	
	for(x=0;x<26;x++)
		putchar((*pa)++);
	putchar('\n');
	
	return 0;
}


/* If you like that...
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

