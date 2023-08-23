#include "main.h"
#include<stdio.h>

/**
 * print_last_digit - print the last digit
 * @i: the number
 * Return: the last digit
 */

int print_last_digit(int i)
{
int j;
if (i < 0)
i *= -1;
j = i % 10;
return (j);
printf("%d", j);
}
