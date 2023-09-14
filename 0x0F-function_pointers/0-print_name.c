#include "function_pointers.h"
#include<stdio.h>
/**
 * print_name - a function to print a name
 * @name: the nmae to print
 * @f: a function
 * Return: none
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
f(name);
}
