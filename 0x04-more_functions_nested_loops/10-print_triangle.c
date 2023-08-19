#include<stdio.h>
#include "main.h"

/**
 * print_triangle - function to print a triangle
 * Return: has no return value
 * @size: to enter the size of the triangle
 */

void print_triangle(int size)
{
if (size <= 0)
printf("\n");
else
{
int i, j, k;
for (i = 0; i < size; i++)
{
for (j = size - 1; j > i; j--)
{
printf(" ");
}
for (k = 0; k <= i; k++)
{
printf("#");
}
printf("\n");
}
}
return;
}
