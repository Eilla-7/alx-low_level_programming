#include<ctype.h>
#include<stdio.h>
#include "main.h"
/**
 * main - This is the entry point of the code
 * Return - 0 Successful
 * _islower - Function to check about lowercase letters
 * @parameter: int c isa letter to check about it
 * Return - 0 if lower and 1 if upper
 */
int r;
r = _islower('H');
int _islower(int c)
{
if (islower(c))
return (0);
else
return (1);
}
