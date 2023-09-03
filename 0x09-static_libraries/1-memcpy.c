#include<stdio.h>
#include "main.h"

/**
 * _memcpy - to copy n bytes from src to dest
 * @dest: the copy of the string src
 * @src: the string to copy from
 * @n: number of bytes to copy
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
  unsigned int i;
  for (i = 0; i < n; i++)
    {
      dest[i] = src[i];
    }
  return (dest);
}
