#include<stdio.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
int ones = '0';
int tens = '0';
int h = '0';

for (h = '0'; h <= '9'; h++)
{
for (tens = '0'; tens <= '9'; tens++)
{
for (ones = '0'; ones <= '9'; ones++)
{
if (!((ones == tens) || (tens == h) || (tens > ones) || (h > tens)))
{
putchar(h);
putchar(tens);
putchar(ones);
if (!(ones == '9' && h == '7' && tens == '8'))
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
