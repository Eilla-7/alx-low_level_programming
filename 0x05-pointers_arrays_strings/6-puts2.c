#include<stdio.h>
#include "main.h"

/**
 * puts2 - a function to print
 * @str: the string
 * Return: no value
 */
void puts2(char *str)
{
int i = 0;
while (str[i] != '\0')
{
printf("%c", str[i]);
i++;
i++;
}
printf("\n");
return;
}
