/*
 * pointer-math.c
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
 * Pointer math:
 * 
 * example:
 * 
 * int foo;
 * 
 * lets say foo has an address of 0x8000...
 * 
 * foo++;
 * 
 * is foo's new address 0x8001?  ...no
 * 
 * it depends on the type of the variable.  An int is 4 bytes, so this
 * will give foo an address of 0x8004, but rememeber there is more to 
 * this
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	int numbers[10];
	int x;
	int *pn;
	
	pn = numbers;
	
	/* fill the array */
	for(x=0;x<10;x++)
	{
		*pn=x+1;
		pn++;
	}
	
	/* display the array */
	for(x=0;x<10;x++)
		printf("numbers[%d] = %d\n", x+1, numbers[x]);
		
	return 0;
}

