#include<stdio.h>
#include "main.h"

/**
 * print_square - function to print a square
 * Return: has no return value
 * @size: the size of the square
 */

void print_square(int size)
{
if (size > 0)
{
int i;
int j;
for (i = 1; i <= size; i++)
{
for (j = 1; j <= size; j++)
{
printf("#");
}
printf("\n");
}
}
else
printf("\n");
return;
}
