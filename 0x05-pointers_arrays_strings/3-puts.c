#include "main.h"
#include<stdio.h>

/**
 *
 */
void _puts(char *str)
{
  int size;
for (size = 0; *str++; size++)
  {
  printf("%c", *str);
  }
 printf("\n");
  return;
}
