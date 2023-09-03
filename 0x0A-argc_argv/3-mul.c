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
int num, i, mul = 1;
if (argc > 1)
{
for (i = 1; i < argc; i++)
{
num = atoi(argv[i]);
mul *= num;
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
