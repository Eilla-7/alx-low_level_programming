#include "main.h"
#include<stdio.h>

/**
 * _puts - print
 * Return: no
 * @str: the string
 */
void _puts(char *str)
{
int size;
printf("%c", *str);
for (size = -0; *str++; size++)
{
printf("%c", *str);
}
printf("\n");
return;
}
