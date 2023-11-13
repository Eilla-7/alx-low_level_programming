#include<stdio.h>
#include "main.h"

/**
 * _strncpy - a function to copy part of a string
 * @dest: the string that take a ccopy from the other one
 * @src: the string that we copy from
 * @n: the size of the part which we need to copy
 * Return: the dest string
 */

char *_strncpy(char *dest, char *src, int n)
{
int j;
for (j = 0; j  < n && src[j] != '\0'; j++)
{
dest[j] = src[j];
}
for ( ; j < n; j++)
{
dest[j] = '\0';
}
return (dest);
}
