/*
 * allocating-a-buffer.c
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
 * Using malloc() to create an input buffer:
 * 
 * 
 */


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	char *input;
	
	input = (char *)malloc(sizeof(char)*1024);
	if(input == NULL)
	{
		printf("Unable to allocate Buffer! Cough! ");
		exit(1);
	}
	printf("Type something long and boring: ");
	fgets(input, 1023, stdin);
	printf("You wrote: ");
	printf("\"%s\"", input);
	
	return 0;
}

