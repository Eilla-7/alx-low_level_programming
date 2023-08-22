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
  int size;
  for (size = 0; *s++; size++);
  return(size);
}
