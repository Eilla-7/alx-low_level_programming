#include<stdio.h>
#include "main.h"

/**
 * print_diagonal - prints a diagonal
 * Return: has no return value
 * @n: number of the forwordslash
 */

void print_diagonal(int n)
{
if (n > 0)
{
int i;
int j;
for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
{
printf(" ");
}
printf("\\ \n");
}
}
else if (n == 0)
printf("\n");
else if (n < 0)
printf("\n");
printf("\n");
return;
}
