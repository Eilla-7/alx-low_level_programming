#include<stdio.h>
#include<stdlib.h>
#include "main.h"

/**
 * string_nconcat -  a function that concatenates two strings.
 * @s1: the first string
 * @s2: the second string
 * @n: the number of byte from s2
 * Return: a string contain the two strings
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int size, len_2, i = 0, len_1, j = 0;
char *s;
for (len_1 = 0; s1[len_1] != '\0'; len_1++)
;
for (len_2 = 0; s2[len_2] != '\0'; len_2++)
;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
size = len_1 + n + 1;
s = malloc(size);
if (s == NULL)
return (NULL);
while (i < size)
{
if (i < len_1)
s[i] = s1[i];
if (i >= len_1)
{
if (j < n - 1)
{
s[i] = s2[j];
j++;
}
else
{
s[i] = s2[j];
j++;
}
}
i++;
}
return (s);
}
