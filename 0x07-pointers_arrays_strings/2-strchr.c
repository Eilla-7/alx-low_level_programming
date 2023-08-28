#include "main.h"
#include<stdio.h>
/**
 * _strchr - function to locate a character in a string
 * @s: the string to locate in
 * @c: the character to locate in the string
 * Return: the string data
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
return (s);
s++;
}
if (c == '\0')
return (s);
return (NULL);
}
