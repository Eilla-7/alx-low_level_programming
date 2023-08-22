#include "main.h"
#include<stdio.h>

/**
 * print_rev - function
 * Return: non
 * @s: the string
 */

void print_rev(char *s)
{
int l = 0;
int i;
if (s == NULL)
return;
while (s[l] != '\0')
{
l++;
}
for (i = l - 1; i >= 0; i--)
{
printf("%c", s[i]);
}
printf("\n");
}
