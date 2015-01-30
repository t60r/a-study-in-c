/*
 * passing-a-struct.c
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
 * Passing a structure to a function
 */


#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define SIZE 5

struct bot {
	int xpos;
	int ypos;
};

struct bot initialize(struct bot b);

int main(int argc, char **argv)
{
	struct bot robots[SIZE];
	int x;
	
	srandom((unsigned)time(NULL));
	
	for(x=0;x<SIZE;x++) {
		robots[x] = initialize(robots[x]);
		printf("Robot %d: Coordinates: %d,%d\n",
			x+1,robots[x].xpos,robots[x].ypos);
	}
	
	return 0;
}

struct bot initialize(struct bot b) {
	int x,y;
	
	x = random();
	y = random();
	x%=20;
	y%=20;
	b.xpos = x;
	b.ypos = y;
	return(b);
}

