#include<ctype.h>
#include<stdio.h>
#include "main.h"

/**
 * _isdigit - a function that check if c is digit or not
 * Return: 0 if c is nit a digit , 1 if c is a digit
 * @c: is an input to check about
 */

int _isdigit(int c)
{
if (isdigit(c))
return (1);
else
return (0);
}
