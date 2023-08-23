#include<stdio.h>
#include "main.h"

/**
 * print_sign - Function to check about alphabet letters
 * @n: int c isa letter to check about it
 * Return: 0 if lower and 1 if upper
 */


int print_sign(int n)
{
if (n < 0)
{
_putchar('-');
return (-1);
printf("\n");
}
else if (n == 0)
{
_putchar('0');
return (0);
printf("\n");
}
else
{
_putchar('+');
return (1);
printf("\n");
}
}
