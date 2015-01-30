/*
 * linked-list.c
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
 * Linked list...sort of works...?
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
		struct stock *next;
	};
	/* declare elements */
	struct stock *first;
	struct stock *current;
	struct stock *new;
	
	/* create the structure in memory */
	first=(struct stock *)malloc(sizeof(struct stock));
	
	if(first==NULL)
	{
		printf("Bad malloc()! Danger!");
		exit(1);
	}
	
	/* Assign structure data */
	current=first;
	strcpy(current->symbol,"FOOB");
	current->quantity=100;
	current->price=900.01;
	current->next=NULL;
	
	new=(struct stock *)malloc(sizeof(struct stock));
	if(new==NULL)
	{
		printf("malloc() no bueno.");
		exit(1);
	}
	current->next=new;
	current=new;
	strcpy(current->symbol,"MSFT");
	current->quantity=100;
	current->price=98.60;
	current->next=NULL;
	
	/* display database */
	
	printf("Investment portfolio\n\n");
	printf("Symbol\tShares\tPrice\tValue\n");
	
	current=first; /* very important */
	
	printf("%-6s\t%5d\t%.2f\t%.2f\n", \
		current->symbol,
		current->quantity,
		current->price,
		current->quantity*current->price);
	current=current->next;
	printf("%-6s\t%5d\t%.2f\t%.2f\n", \
		current->symbol,
		current->quantity,
		current->price,
		current->quantity*current->price);
	
	return (0);
}

