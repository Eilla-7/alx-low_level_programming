#include<stdio.h>
#include "main.h"

/**
 * _puts_recursion - a function to print a string recursevly
 * @s: the string to print
 * Return: none
 */
void _puts_recursion(char *s)
{
if (*s)
{
_putchar(*s);
_puts_recursion(s + 1);
}
else
_putchar('\n');
}
