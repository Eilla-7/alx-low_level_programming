#include<stdio.h>
#include<string.h>
#include "main.h"

/**
 * rev_string - function to print the revers of the strin
 * @s: the string
 * Return: no return
 */
void rev_string(char *s)
{
int l = strlen(s);
int i, j;
char temp;
for (i = 0, j = l - 1; i < j; i ++, j--)
{
temp = s[i];
s[i] = s[j];
s[j] = temp;
}
return;
}
