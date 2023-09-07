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
unsigned int len_2, i = 0, len_1, j = 0;
char *s;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (len_1 = 0; s1[len_1] != '\0'; len_1++)
;
for (len_2 = 0; s2[len_2] != '\0'; len_2++)
;
s = malloc(len_1 + n + 1);
if (s == NULL)
return (NULL);
for (; s1[i] != '\0'; i++)
{
s[i] = s1[i];
}
for (; j < n; j++)
{
s[i] = s2[j];
i++;
}
s[i] = '\0';
return (s);
}
