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
root@63ee2bd82f14:~/alx-low_level_programming/0x04-more_functions_nested_loops# cat 1-isdigit.c
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
