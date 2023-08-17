#include<stdio.h>
#include "main.h"

/**
 * print_most_numbers - a function prints numbers between 0 and 9
 * @void: this function have no parameter
 * Return: this function doesn't return any value
 */

void print_most_numbers(void)
{
int i;
for (i = 0; i < 10; i++)
{
if (i != 2)
{
if (i != 4)
{
printf("%d", i);
}
}
}
return;
}
