#include<ctype.h>
#include<stdio.h>
#include "main.h"

/**
 * _isupper - A function to check if the letter is upercase or not
 * Return: 0 if it is a lowwercase , 1 if it is an uppercase
 * @c: is the letter we need to check about
 */

int _isupper(int c)
{
  if (isupper(c))
    return (1);
  else
    return (0);
}
