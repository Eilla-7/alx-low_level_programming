#include<string.h>
#include<stdio.h>
#include "main.h"

/**
 * puts_half - print the half
 * @str: the strin
 * Return: none
 */

void puts_half(char *str)
{
int j;
int i;
int l = strlen(str);

if (l % 2 == 0)
i = l / 2;
else
i = (l - 1) / 2;
for (j = i; j < l; j++)
{
printf("%c", str[j]);
}
printf("\n");
}
