#include<stdio.h>
#include "main.h"

/**
 * _memset - function to fill memory with constant byte
 * @s: the array of the bytes
 * @b: the bytes to fill with
 * @n: number of bytes
 * Return: the array
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
