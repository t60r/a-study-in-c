/*
 * bitwise-character.c
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
 * 
 */


#include <stdio.h>

int main(int argc, char **argv) {
	
	char input[64];
	int ch;
	int x = 0;
	
	printf("Type in ALL CAPS: ");
	fgets(input,63,stdin);
	
	while(input[x] != '\n') {
		ch = input[x] | 32;
		putchar(ch);
		x++;
	}
	printf("\n");
	return 0;
}

