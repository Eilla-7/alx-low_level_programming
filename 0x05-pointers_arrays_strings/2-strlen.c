#include <string.h>
#include<stdio.h>
#include "main.h"

/**
 * _strlen - function to print length of the char
 * Return: an integer value
 * @s: the pointer of the char
 */

int _strlen(char *s)
{
  char m [30];
  int j;
  int i;
  for (j = 0; *s != '\0'; j++)
    {
      m[j] = *(s + j);
    }
  for (i = 0; m[i] != '\0'; i++);
  return(i);
}
