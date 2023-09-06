#include "main.h"
#include<stdio.h>
/**
 * _atoi - a function to let the string recive a number
 * @s: the string
 * Return: the number
 */

int _atoi(char *s)
{
int i = 0, d = 0, n = 0, len = 0, f = 0, digit = 0;
while (s[len] != '\0')
len++;
while (i < len && f == 0)
{
if (s[i] >= '0' && s[i] <= '9')
{
digit = s[i] - '0';
if (d % 2)
digit = -digit;
n = n * 10 + digit;
f = 1;
if (s[i + 1] < '0' || s[i + 1] > '9')
break;
f = 0;
}
i++;
}
if ( f == 0)
return (0);
return (n);
}


/**
 * _isdigit - a function to check if the input is a digit
 * @c: the input value to check about
 * Return: a truth value
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}

/**
 * _check - a function to check about the string
 * @s: the string
 * Return: 0 Success
 */
int _check(char *s)
{
int k = 0;
int l;
for (l = 0; s[l] != '\0'; l++)
;
while (k < l)
{
if (!_isdigit(s[k]))
return (0);
k++;
}
return (1);
}



/**
 * main - Entry point
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0 Sucess
 */
int main(int argc, char *argv[])
{
  int j = 1, sum = 0, num;
  while (j < argc)
    {
      if (_check(argv[j]))
	{
	  num = _atoi(argv[j]);
	  sum += num;
	 
	}
      else
	{
	printf("Error\n");
	return (1);
	}
      j++;
    }
  printf("%d\n", sum);
  return (0);
 }
