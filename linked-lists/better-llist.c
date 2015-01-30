/*
 * better-llist.c
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
 * 'Better' linked list.  Hope it runs properly...
 * 
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ITEMS 5

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

struct stock *make_structure(void);
void fill_structure(struct stock *a, int c);
void show_structure(struct stock *a);

int main(int argc, char **argv)
{
	int x;
	for(x=0;x<ITEMS;x++)
	{
		if(x==0)
		{
			first=make_structure();
			current=first;
		}
		else
		{
				new=make_structure();
				current->next=new;
				current=new;
		}
		fill_structure(current, x+1);
	}
	current->next=NULL;
	
	/* Display Database */
	printf("Investment Portfolio\n\n");
	printf("Symbol\tShares\tPrice\tValue\n");
	current = first;
	while(current)
	{
		show_structure(current);
		current=current->next;
	}
	
	return 0;
}

struct stock *make_structure(void)
{
	struct stock *a;
	
	a=(struct stock *)malloc(sizeof(struct stock));
	if(a==NULL)
	{
		printf("Another malloc() error!\n");
		exit(1);
	}
	return (a);
}

void fill_structure(struct stock *a, int c)
{
	printf("Item #%d/%d:\n",c,ITEMS);
	printf("Stock Symbol: ");
	scanf("%s", a->symbol);
	printf("Number of shares: ");
	scanf("%d", &a->quantity);
	printf("Share price: ");
	scanf("%f", &a->price);
}

void show_structure(struct stock *a)
{
	printf("%-6s\t%5d\t%.2f\t%.2f\n", \
	a->symbol,
	a->quantity,
	a->price,
	a->quantity*a->price);
}
