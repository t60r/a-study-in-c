/*
 * bitshift-right.c
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
	
	printf("Type a value from 0 to 255: ");
	scanf("%d", &bshift);
	
	for(x=0;x<8;x++) {
		printf("%s\n",binbin(bshift));
		bshift = bshift >> 1;
	}
	return 0;
}

char *binbin(int n) {
	static char bin[9];
	int x;
	
	for(x=0;x<8;x++) {
		bin[x] = n & 0x80 ? '1' : '0';
		n <<=1;/* also here */
	}
	bin[x] = '\0';
	return(bin);
}

