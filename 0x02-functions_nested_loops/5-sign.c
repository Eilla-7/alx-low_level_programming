#include<stdio.h>
#include "main.h"

/**
 * main - This is the entry point of the code
 * Return - 0 Successful
 * _islower - Function to check about alphabet letters
 * @parameter: int c isa letter to check about it
 * Return - 0 if lower and 1 if upper
 */


int print_sign(int n)
{
if (n < 0)
{
printf("+");
return (1);
}
else if (n == 0)
{
printf("0");
return (0);
}
else
{
printf("-1");
return (-1);
}
}
