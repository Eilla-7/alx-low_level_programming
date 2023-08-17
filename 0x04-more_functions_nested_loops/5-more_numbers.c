#include<stdio.h>
#include "main.h"

/**
 * more_numbers - prints numbees many times
 * Return: has no return value
 * @void: has no parameters
 */

void more_numbers(void)
{
int i = 0;
while (i < 10)
{
int j;
for (j = 0; j < 15; j++)
{
printf("%d", j);
}
printf("\n");
}
return;
}
