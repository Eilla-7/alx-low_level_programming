#include<stdio.h>
#include "main.h"
/**
 * _strpbrk - returns the characters that semilar in the accept string
 * @s: the first string
 * @accept: the second string
 * Return: the string has similar characters
 */
char *_strpbrk(char *s, char *accept)
{
  int i;

  while (*s != '\0')
    {
      for (i = 0; accept[i]; i++)
	{
	  if (*s == accept[i])
	    return (s);

	}
      s++;
    }
  return ('\0');
}
