/*
 * aligning-output.c
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
 * Shows examples of aligning output
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	printf("%-9s me\n","meet");
	printf("%-8s me\n","meet");
	printf("%-7s me\n","meet");
	printf("%-6s me\n","meet");
	printf("%-5s me\n","meet");
	printf("%-4s me\n","meet");
	return 0;
}

