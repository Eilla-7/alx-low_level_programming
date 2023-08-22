#include<stdio.h>
#include "main.h"

/**
 * _strcpy - function
 * @dest: the parameter
 * @src: the string
 * Return: the value of dest
 */

char *_strcpy(char *dest, char *src)
{
  int i = -1;
  do
    {
      i++;
      dest[i] = src[i];
    }while (src[i] != '\0');
  return(dest);
}
