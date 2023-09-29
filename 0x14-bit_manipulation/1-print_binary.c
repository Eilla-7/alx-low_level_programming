#include "main.h"
#include <stdio.h>
/**
 * print_binary - a function that prints the binary
 * representation of a number
 * @n: the decimal number to be presented
 */
void print_binary(unsigned long int n)
{
	int i, ones = 0;
	unsigned long int binary;

	for (i = sizeof(unsigned long int) * 8 - 1; i >= 0; i--)
	{
		binary = n >> i;
		if (binary & 1)
		{
			_putchar('1');
			ones++;
		}
		else if (ones)
			_putchar('0');

	}

	if (!ones)
		_putchar('0');

}
