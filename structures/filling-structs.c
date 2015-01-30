/*
 * filling-structs.c
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
 * Filling a structure
 */
#include <stdio.h>

int main(int argc, char **argv)
{
	/* Define a structure */
	struct president {
		char name [40];
		int year;
	} first  = { /* Declare within */
		"Bob Dobbs",
		1337
	};
	
	/* Making another president */
	struct president second = {
		"foo bar",
		31337
	};

	/* Print one */
	printf("The first president was %s\n", first.name);
	printf("He was innagurated in %d\n", first.year);
	printf("The second president was %s\n", second.name);
	printf("He was innagurated in %d\n", second.year);
	return 0;
}

