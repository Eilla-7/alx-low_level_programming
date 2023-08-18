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
for (i = 0; i < n; i++)
{
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
