/*
 * sizeof.c
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
 * Reading a Variables Size with the sizeof() builtin
 * sizeof returns the variables size in bytes of memory
 * 
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	char c = 'c';
	int i = 123;
	float f = 98.6;
	double d = 6.022E23;
	
	printf("char\t%lu\n",sizeof(c));
	printf("int\t%lu\n",sizeof(i));
	printf("float\t%lu\n",sizeof(f));
	printf("double\t%lu\n",sizeof(d));
	/******************************************************************* 
	 * -----------------------------------------------------------------
	 * ATTENTION 
	 * -----------------------------------------------------------------
	 * The book uses %u, instead of %lu which is what
	 * sizeof() actually returns. oops.
	 * -----------------------------------------------------------------
	 ******************************************************************/
	return 0;
}

