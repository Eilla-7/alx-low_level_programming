#include<stdio.h>
#include "main.h"

/**
 * _strcat - a function to append a string to another one
 * @dest: the first string
 * @src: the string we need to append it
 * Return: a string contains tow strings togather
 */

char *_strcat(char *dest, char *src)
{
  int i;
  int j = 0;

  for (i = 0; dest[i] != '\0'; i++)
    ;
  if (dest[i] == '\0')
    do {
      dest[i] = src[j];
      j++;
      i++;
    } while (src[j] != '\0');
  return (dest);
}
