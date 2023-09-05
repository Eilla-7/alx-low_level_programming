#include<stdio.h>
#include<stdlib.h>
#include "main.h"
/**
 * str_concat -  a function that concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * Return: a string contain the concatination of them
 */
char *str_concat(char *s1, char *s2)
{
unsigned int len1, j = 0, k = 0, len2, size;
char *s;

/*if null passed*/
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

/*length of strings*/
for (len1 = 0; s1[len1] != '\0'; len1++)
;
for (len2 = 0; s2[len2] != '\0'; len2++)
;

/*size of the final string*/
size = (len1) + (len2);
s = malloc((sizeof(char) * size) +1);

if (s == NULL)
return (NULL);

while (j < size)
{

/*copy the first string*/
if (j <= len1)
{
s[j] = s1[j];
}

/*copy the second string*/
if (j >= len1)
{
s[j] = s2[k];
k++;
}
j++;
}
return (s);
}
