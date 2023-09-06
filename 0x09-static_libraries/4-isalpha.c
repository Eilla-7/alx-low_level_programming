#include<stdio.h>
#include "main.h"
/**
 * _isalpha - Function to check about alphabet letters
 * @c: int c isa letter to check about it
 * Return: 0 if lower and 1 if upper
 */


int _isalpha(int c)
{
  if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
    return (1);
  else
    return (0);
}
