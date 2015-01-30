/*
 * structured-malloc.c
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
 * Using malloc() for a structure
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
	struct stock {
		char symbol[5];
		int quantity;
		float price;
	};
	struct stock *invest;
	
	/* Create structure in memory */
	invest=(struct stock *)malloc(sizeof(struct stock));
	if(invest==NULL)
	{
		puts("Some kind of malloc() error");
		exit(1);
	}
	
	/* Assign structure some data */
	strcpy(invest->symbol, "FOOB");
	invest->quantity=100;
	invest->price=801.19;
	
	/* Display database */
	
	printf("Investment portfolio\n\n");
	printf("Symbol\tShares\tPrice\tValue\n");
	printf("%-6s\t%5d\t%.2f\t%.2f\n", \
		invest->symbol,
		invest->quantity,
		invest->price,
		invest->quantity*invest->price);
		
	return 0;
}

