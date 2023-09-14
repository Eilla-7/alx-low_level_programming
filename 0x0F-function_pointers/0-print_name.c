#include "function_pointers.h"
/**
 * print_name - a function to print a name
 * @name: the nmae to print
 * @f: a function
 * Return: none
 */
void print_name(char *name, void (*f)(char *))
{
f(name);
}
