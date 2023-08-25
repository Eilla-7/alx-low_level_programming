#include<stdio.h>
#include "main.h"

/**
 * rot13 - function that encode in rot13
 * @src: the string to be encoded
 * Return: the encoded string
 */

char *rot13(char *src)
{
int i;
int j;
char data[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (i = 0; src[i] != '\0'; i++)
{
for (j = 0; j < 52; j++)
{
if (src[i] == data[j])
{
src[i] = rot[j];
break;
}
}
}
return (src);
}
