#include<stdio.h>
#include "main.h"

/**
 * print_number - a function to print a number
 * Return: has no return value
 * @n: the number to print
 */

void print_number(int n)
{
unsigned int k = n;

if (n < 0)
{
n *= -1;
k = n;
_putchar('-');
}
k /= 10;
print_number(k);
_putchar((unsigned int) n % 10 - '0');
}
