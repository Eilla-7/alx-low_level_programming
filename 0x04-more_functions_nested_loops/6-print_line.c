#include<stdio.h>
#include "main.h"

/**
 * print_line - function prints line
 * Return: have no return value
 * @n: number of underscore to be printed
 */

void print_line(int n)
{
int m = '_';
_putchar(n * m);
printf("\n");
return;
}
