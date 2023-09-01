#include "main.h"
/**
 * _sqrt_recursion -  a function that returns the natural
 * square root of a number
 * @n: the number
 * Return: the root square
 */

int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (act_sqrt_recursion(n, 0));
}

/**
  * act_sqrt_recursion - a function that returns the
  * square of a number
  * @n: the number
  * @i: the square
  * Return: the square
  */
int act_sqrt_recursion(int n, int i)
{
if (i * i > n)
return (-1);
if (i * i == n)
return (i);
return (act_sqrt_recursion(n, i + 1));
}
