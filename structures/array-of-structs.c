/*
 * array-of-structs.c
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
 * 
 */


#include <stdio.h>

int main(int argc, char **argv) {
	/* Declare a structure */
	struct scores {
		char name[32];
		int score;
	};
	/* Declare an array of them */
	struct scores player[4];
	int x;
	
	/* Loop through array of structures */
	for(x=0;x<4;x++) {
		printf("Enter player %d: ", x+1);
		scanf("%s", player[x].name);
		printf("Enter their score");
		scanf("%d", &player[x].score);
	}
	
	/* Display the array of structures formatted
	 */
	printf("Player info\n");
	printf("#\tName\tScore\n");
	for(x=0;x<4;x++) {
		printf("%d\t%s\t%5d\n",
			x+1, player[x].name, player[x].score);
	}
	return 0;
}

