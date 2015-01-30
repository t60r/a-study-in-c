/*
 * typedef-for-structures.c
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
 * You can use typedef to define structures
 */


#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
	typedef struct date {
		int month;
		int day;
		int year;
	} calendar; /* We have now created a new keyword calendar */
	
	struct human {
		char name[45];
		calendar birthday; /* Using calendar keyword in nested struct */
	};
	
	struct human president;
	
	strcpy(president.name, "Bob Dobbs");
	president.birthday.month = 3;
	president.birthday.day = 31;
	president.birthday.year = 1337;
	
	printf("%s was born on %d/%d/%d\n",
		president.name,
		president.birthday.month,
		president.birthday.day,
		president.birthday.year);
	return 0;
}

