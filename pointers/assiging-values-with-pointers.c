/*
 * assiging-values-with-pointers.c
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
 * Assigning Values with a Pointer:
 * 
 * p equals the address of a;
 * the value of p equals 'A';
 * and so on...
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	char a,b,c;
	char *p;
	
	p = &a;
	*p = 'A';
	p = &b;
	*p = 'B';
	p = &c;
	*p = 'C';
	printf("Know your %c%c%cs\n",a,b,c);
	
	return 0;
}
