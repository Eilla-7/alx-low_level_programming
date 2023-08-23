#include "main.h"
#include<stdio.h>

/**
 * print_last_digit - print the last digit
 * @i: the number
 * Return: the last digit
 */

int print_last_digit(int i)
{
i *= -1;
return (i % 10);
}
