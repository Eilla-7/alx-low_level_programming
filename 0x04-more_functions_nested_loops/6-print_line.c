#include<stdio.h>
#include "main.h"

/**
 * print_line - function prints line
 * Return: have no return value
 * @n: number of underscore to be printed
 */

void print_line(int n)
{
if (n < 0)
{
while (n--)
{
printf("_");
}
}
else
printf("\n");
return;
}
