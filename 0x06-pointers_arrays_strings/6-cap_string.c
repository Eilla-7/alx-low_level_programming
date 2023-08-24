#include<stdio.h>
#include "main.h"

/**
 * cap_string - a function to capitlize all the word of the string
 * @src: the string we want to capitlize its words
 * Return: the function after capitlizing
 */

char *cap_string(char *src)
{
int i = 0;
int cap = 1;
while (src[i] != '\0')
{
if (src[i] == ' ' || src[i] == '\t' || src[i] == '\n'
|| src[i] == ',' || src[i] == ';'
|| src[i] == '.' || src[i] == '!' || src[i] == '?'
|| src[i] == '"' || src[i] == '(' || src[i] == ')'
|| src[i] == '{' || src[i] == '}')
cap = 1;
else if ((src[i] >= 'a' && src[i] <= 'z') && cap)
{
src[i] -= 32;
cap = 0;
}
else
cap = 0;
i++;
}
return (src);
}
