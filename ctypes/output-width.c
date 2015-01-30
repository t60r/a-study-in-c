/*
 * output-width.c
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
 * Shows how to manipulate output width
 */
#include <stdio.h>

int main(int argc, char **argv) {
	printf("%%15s = %15s\n","hello");
	printf("%%14s = %14s\n","hello");
	printf("%%13s = %13s\n","hello");
	printf("%%12s = %12s\n","hello");
	printf("%%11s = %11s\n","hello");
	printf("%%10s = %10s\n","hello");
	printf(" %%9s = %9s\n","hello");
	printf(" %%8s = %8s\n","hello");
	printf(" %%7s = %7s\n","hello");
	printf(" %%6s = %6s\n","hello");
	printf(" %%5s = %5s\n","hello");
	printf(" %%4s = %4s\n","hello");
	return(0);
}

