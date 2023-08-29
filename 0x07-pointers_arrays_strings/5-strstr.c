#include "main.h"
#include<stdio.h>
/**
 * _strstr -  locates a substring.
 * @haystack: the string
 * @needle: substring
 * Return: haystack
 */
char *_strstr(char *haystack, char *needle)
{
while (*haystack != '\0')
{
if (*haystack == *needle)
return (haystack);
haystack++;
}
if (*needle == '\0')
return (haystack);
return (NULL);
}
