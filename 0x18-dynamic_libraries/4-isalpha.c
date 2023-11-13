#include<ctype.h>
#include<stdio.h>
#include "main.h"
/**
 * _isalpha - Function to check about alphabet letters
 * @c: int c isa letter to check about it
 * Return: 0 if lower and 1 if upper
 */


int _isalpha(int c)
{
if (isalpha(c))
return (1);
else
return (0);
}

