#include<stdio.h>
#include "main.h"

/**
 * _strncat - function to append a part of a string to another one
 * @dest: the first string
 * @src: the second string
 * @n: number of bytes
 * Return: the final look of the string
 */

char *_strncat(char *dest, char *src, int n)
{
  int i;
  int j = 0;
  for (i = 0; dest[i] != '\0'; i++)
    ;
  while (src[j] != '\0')
    {
      if (j < n)
	{
	  dest[i] = src[j];
	}
      j++;
      i++;
    }
  return (dest);
}
