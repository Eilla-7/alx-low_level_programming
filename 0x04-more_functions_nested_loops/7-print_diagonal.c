#include<stdio.h>
#include "main.h"

/**
 * print_diagonal - prints a diagonal
 * Return: has no return value
 * @n: number of the forwordslash
 */

void print_diagonal(int n)
{
int j = 0;
while (n > 0)
{
int i = j;
while (i > 0)
{
printf(" ");
i--;
}
printf("\\");
printf("\n");
j++;
n--;
}
if (n <= 0)
printf("\n");
return;
}
