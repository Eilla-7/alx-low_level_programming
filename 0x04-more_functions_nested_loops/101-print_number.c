#include<stdio.h>
#include "main.h"

/**
 * print_number - a function to print a number
 * Return: has no return value
 * @n: the number to print
 */

void print_number(int n)
{
if (n > 0)
_putchar(n);
else
_putchar(-n);
return;
}
