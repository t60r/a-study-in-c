/*
 * more-bitshift-right.c
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
 * 
 */


#include <stdio.h>

char *binbin(int n);

int main(int argc, char **argv)
{
	int bshift,x;
	
	printf("Type a value from 0 to 65535: ");
	scanf("%d", &bshift);
	
	for(x=0;x<8;x++) {
		printf("%s\n",binbin(bshift));
		bshift = bshift >> 1;
	}
	return 0;
}

/* binbin()
 * 
 * takes a decimal integer and returns it's binary form with bin
 * 
 * to change the size of the returned bit length you need to edit:
 * static char bin[length+1]
 * for(x=0;x<length;x++)
 * and the corresponding memory allocation in the 0x8000 line.
 * 
 * 
 * 'perform a bitwise and operation between n and 0x80, if it evaluates 
 * to true, return char '1', otherwise return char '0', and store the 
 * char into bin[x] then left shift n by 1'
 * 
 * */
 
char *binbin(int n) {
	static char bin[17];
	int x;
	
	for(x=0;x<16;x++) {
		bin[x] = n & 0x8000 ? '1' : '0';
		n <<=1;
	}
	bin[x] = '\0';
	return(bin);
}

