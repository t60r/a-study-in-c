/*
 * sizeof-array.c
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
 * sizeof() an array, with an added strlen() of the array.
 * 
 */

#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {
	char string[] = "The rain it raineth on the just and the unjust fella.";
	long unsigned int i = strlen(string); /* probably unnecessary */
	
	printf("The string \"%s\" has a size of %lu.\n",
		string,sizeof(string));
	printf("The string \"%s\" has a length of %lu.\n",
		string, i);
	return 0;
}



