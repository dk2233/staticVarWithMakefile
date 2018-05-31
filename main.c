/*
 * main.c
 * 
 * Copyright 2018 daniel <daniel@daniel-mini>
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
#include <stdlib.h>




static void average(int input);

static void average(int input)
{
	static int var_s;
	int var_not_static=0;
	printf(" input %d \n static %d  \n not staic %d \n",input,var_s, var_not_static);
	
	var_s = (var_s+ input )/2;
	var_not_static =( var_not_static+input )/2;


}


int main(int argc, char **argv)
{
	
	
	for(int i = 0U; i< 10; i++)
	{
		average(rand() % 30);
	}
	return 0;
}

