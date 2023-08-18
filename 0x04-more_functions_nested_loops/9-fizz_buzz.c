#include<stdio.h>
#include "main.h"
/**
 * fizzBuzz - function that prints numbers and two words
 * Return: has no return value
 * @void: has no parameter
 */

void fizzBuzz(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
printf("FizzBuzz ");
else if (i % 5 == 0)
printf("Buzz ");
else if (i % 3 == 0)
printf("Fizz ");
else
printf("%d", i);
printf(" ");
}
return;
}
