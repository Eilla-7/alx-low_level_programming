#include<stdio.h>
/**
 * main - is the body of the program
 * Return: 0 if success
 * @void: has no parameter
 */
int main(void)
{
int i = 1;
while (i <= 100)
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
i++;
}
printf("\n");
return (0);
}
