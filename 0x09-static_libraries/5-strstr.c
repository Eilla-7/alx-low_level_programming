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
  for (; *haystack != '\0'; haystack++)
    {
      char *point1 = haystack;
      char *point2 = needle;

      while (*point1 == *point2 && *point2 != '\0')
	{
	  point1++;
	  point2++;
	}
      if (*point2 == '\0')
	return (haystack);
    }
  return (0);
}
