#include<stdio.h>
#include<stdlib.h>
#include "main.h"
/**
 * _strdup -  function that returns a pointer to a newly allocated
 * space in memory which contains a copy of the string given as a
 * parameter
 * @str: a string we want to copy
 * Return: the copy of the str
 */
char *_strdup(char *str)
{
unsigned int i = 0, j = 0, len;
char *s;

if (str == NULL)
return (NULL);
for (len = 0; str[len] != '\0'; len++)
;
s = malloc(sizeof(char) * len + 1);

while (i < len)
{
s[i] = str[j];
i++;
j++;
}
return (s);
free(s);
}
