#include<stdio.h>
#include "main.h"

/**
 * string_toupper - function to change all lowercase char to uppercase
 * @src: the string of the char
 * Return: the string after change the lowercase to uppercase
 */
char *string_toupper(char *src)
{
int i = 0;
while (src[i] != '\0')
{
if (src[i] >= 'a' && src[i] <= 'z')
src[i] = src[i] - 32;
i++;
}
return (src);
}
