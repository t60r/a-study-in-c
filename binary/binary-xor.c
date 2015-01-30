/*
 * bitwise-xor.c
 * 
 * Copyright 2014 Anne Onymous <anne@onymous.ly>
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
 * Bitwise | operator: just like || and &&, | and & have operations
 * 
 * 		| is the bitwise OR operator
 * 		& is the bitwise AND operator
 * 		^ is the bitwise XOR operator
 * 
 * This program will demonstrate ^: XOR will return a 1 for bits that
 * are different and a 0 for bits that are the same.
 * 
 */

#include <stdio.h>

char *binbin(int n);

int main() {
	int a,x,r;

	a = 73;
	x = 170;

	printf("  %s %3d\n",binbin(a),a);
	printf("^ %s %3d\n",binbin(x),x);
	r = a ^ x;
	printf("= %s %3d\n",binbin(r),r);
	printf("^ %s %3d\n",binbin(x),x);
	a = r ^ x;/* reverses the process */
	printf("= %s %3d\n",binbin(a),a);
	return(0);
}

char *binbin(int n) {
	static char bin[9];
	int x;
	
	for(x=0;x<8;x++) {
		bin[x] = n & 0x80 ? '1' : '0';
		n <<=1;
	}
	bin[x] = '\0';
	return(bin);
}
