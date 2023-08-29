#include "main.h"
#include<stdio.h>
/**
 *
 */
char *_strstr(char *haystack, char *needle)
{
  while (*s != '\0')
{
if (*haystack == needle)
return (haystack);
haystack++;
}
if (needle == '\0')
return (haystack);
return (NULL);
}
