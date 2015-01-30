/*
 * freeing-memory.c
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
 * free()ing memory using the free function.
 * 
 * *dont forget your stdlib for sizeof()
 */


#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *age;
	age = (int *)malloc(sizeof(int)*1);
	if (age==NULL)
	{
		printf("Hey, dude...what was that again?");
		/* Out of memory */
		exit(1);
	}
	printf("How old are you in years? ");
	scanf("%d", age);
	*age *= 365;
	printf("You are over %d days old!\n", *age);
	free(age);
	if (age==NULL)
	{
		printf("Memory has been freed.");
	}
	
	return 0;
}

