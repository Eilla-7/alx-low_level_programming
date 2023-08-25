#include<stdio.h>
#include "main.h"

/**
 * leet - a function to code the string in leet model
 * @src: the string we want to code
 * Return: the string after coding
 */

char *leet(char *src)
{
int i = 0;
while (src[i] != '\0')
{
if (src[i] == 'a' || src[i] == 'A')
src[i] = '4';
else if (src[i] == 'e' || src[i] == 'E')
src[i] = '3';
else if (src[i] == 'o' || src[i] == 'O')
src[i] = '0';
else if (src[i] == 't' || src[i] == 'T')
src[i] = '7';
else if (src[i] == 'l' || src[i] == 'L')
src[i] = '1';
i++;
}
return (src);
}
