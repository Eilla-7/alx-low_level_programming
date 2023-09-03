#include<stdio.h>
#include<stdlib.h>
/**
 * main - Entry point
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0 Sucess
 */
int main(int argc, char *argv[])
{
int i, mul = 1, num1, num2;
if (argc > 1 && argc < 3)
{
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
for (i = 1; i < argc; i++)
{
mul = num1 * num2;
}
printf("%d\n", mul);
return (0);
}
else
{
printf("Error\n");
return (1);
}
}
