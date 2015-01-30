/*
 * fun-with-printf.c
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

int main(int argc, char **argv)
{
	float sample1 = 34.5;
	float sample2 = 12.3456789;
	printf("%%9.1f = %9.1f\n",sample1);
	printf("%%8.1f = %8.1f\n",sample1);
	printf("%%7.1f = %7.1f\n",sample1);
	printf("%%6.1f = %6.1f\n",sample1);
	printf("%%5.1f = %5.1f\n",sample1);
	printf("%%3.1f = %3.1f\n",sample1);
	printf("%%2.1f = %2.1f\n",sample1);
	printf("%%1.1f = %1.1f\n",sample1);
	printf("%%9.1f = %9.1f\n",sample2);
	printf("%%9.2f = %9.2f\n",sample2);
	printf("%%9.3f = %9.3f\n",sample2);
	printf("%%9.4f = %9.4f\n",sample2);
	printf("%%9.5f = %9.5f\n",sample2);
	printf("%%9.6f = %9.6f\n",sample2);
	printf("%%9.7f = %9.7f\n",sample2);
	printf("%%9.6f = %9.6f\n",sample2);
	printf("%%9.7f = %9.7f\n",sample2);
	printf("%%9.8f = %9.8f\n",sample2);
	return 0;
}

