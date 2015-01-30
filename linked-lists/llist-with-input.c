/*
 * llist-with-input.c
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
 * Interactive Linked List Beast
 */


#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

struct typical {
	int value;
	struct typical *next;
};

struct typical *first;
struct typical *current;
struct typical *new;

int menu(void);
void add(void);
void show(void);
void delete(void);
struct typical *create(void);

/* The main function takes input, everything else is wheels and greas */


int main(int argc, char **argv)
{
	int choice='\0'; /* get the while loop to spin */
	first=NULL;
	while(choice!='Q')
	{
		choice=menu();
		switch (choice)
		{
			case 'S':
				show();
				break;
			case 'A':
				add();
				break;
			case 'R':
				delete();
				break;
			case 'Q':
				break;
			default:
				break;
		}
	}
	return 0;
}

int menu(void)
{
	int ch;
	
	printf("(S)how, (A)dd, (R)emove, (Q)uit: ");
	ch=getchar();
	while(getchar()!='\n')  /* removes extra newline */
		;
	return(toupper(ch));
}

void add(void)
{
	if(first==NULL) /* special case for first */
	{
		first=create();
		current=first;
	}
	else
	{
		current=first;
		while(current->next) /* last item is null */
			current=current->next;
		new=create();
		current->next=new; /* update link */
		current=new;
	}
	printf("Type a value: ");
	scanf("%d",&current->value);
	current->next=NULL;
	while(getchar()!='\n')
		;
}
/* Display all structs in the linked list */
void show(void)
{
	int count=1;
	
	if(first==NULL)
	{
		printf("Nothing to see here...\n");
		return;
	}
	printf("Showing all records:\n");
	current=first; /* still important */
	while(current)
	{
		printf("Record %d: %d\n",count, current->value);
		current=current->next;
		count++;
	}
}

void delete(void)
{
	struct typical *previous;
	int r,c;
	
	if(first==NULL)
	{
		printf("No records allowed!\n");
		return;
	}
	printf("Choose a record to remove: ");
	show();
	printf("Record: ");
	scanf("%d", &r);
	while(getchar()!='\n')
		;
	c=1;
	current=first;
	previous=NULL;
	while(c!=r)
	{
		if(current==NULL)
		{
			printf("Record not found.\n");
			return;
		}
		previous=current;
		current=current->next;
		c++;
	}
	if(previous==NULL)
		first=current->next;
	else
		previous->next=current->next;
	printf("Record %d removed.\n", r);
	free(current);
}

struct typical *create(void)
{
	struct typical *a;
	a=(struct typical *)malloc(sizeof(struct typical));
	if(a==NULL)
	{
		printf("malloc() on the loose again!");
		exit(1);
	}
	return(a);
}
