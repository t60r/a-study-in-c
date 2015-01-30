/*
 * getchar.c
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
 * new getch() function
 */


#include <stdio.h>
char getch(void);

int main(int argc, char **argv)
{
	char p = getch();
	printf("%c", p);
	return 0;
}

char getch(void) {
	char ch;
	
	ch = getchar();
	while(getchar()!='\n')
		;
	return(ch);
}
