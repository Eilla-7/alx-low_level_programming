#include<stdio.h>
/**
 * main - is the body of the program
 * Return: 0 if success
 * @void: has no parameter
 */
int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (((i % 3) || (i % 5) == 0))
printf("FizzBuzz");
else if ((i % 5) == 0)
printf("Buzz");
else if ((i % 3) == 0)
printf("Fizz");
else
printf("%d", i);
printf(" ");
}
printf("\n");
return (0);
}
