#include<stdio.h>
#include "main.h"

/**
 * print_diagonal - prints a diagonal
 * Return: has no return value
 * @n: number of the forwordslash
 */

void print_diagonal(int n)
{
while (n > 0)
{
printf("'\' \n");
n--;
}
if (n <= 0)
printf("\n");
return;
}
