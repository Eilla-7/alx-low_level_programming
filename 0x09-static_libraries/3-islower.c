#include<ctype.h>
#include<stdio.h>
#include "main.h"
/**
 * _islower - Function to check about lowercase letters
 * @c: int c isa letter to check about it
 * Return: 0 if lower and 1 if upper
 */


int _islower(int c)
{
  if (islower(c))
    return (1);
  else
    return (0);
}
