/*
 * system-clear.c
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
 * system() arguments can use programs on your computer!
 * these arent very portable, unless you do some OS detection of course
 * uname -s, uname -m etc...
 * 
 */ 


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	printf("Press enter to clear the screen: ");
	getchar();
	system("clear");
	system("uname -s");
	system("uname -m");
	system("xterm -e calcurse &");
	system("Thats better");
	return 0;
}

