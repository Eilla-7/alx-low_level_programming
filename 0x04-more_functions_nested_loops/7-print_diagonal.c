#include<stdio.h>
#include "main.h"

/**
 * print_diagonal - prints a diagonal
 * Return: has no return value
 * @n: number of the forwordslash
 */

void print_diagonal(int n)
{
int i;
int j;
if (n > 0)
{
for (i = n; i >= 1; i--)
{
for (j = n - 1; j >= i; j--)
{
printf(" ");
}
printf("'\' \n");
}
}
else if (n <= 0)
printf("\n");
return;
}
