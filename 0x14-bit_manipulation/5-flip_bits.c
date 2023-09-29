#include "main.h"
/**
 * flip_bits - a function that returns the number of bits you would
 * need to flip to get from one number to another
 * @n: the first number
 * @m: the second number
 * Return: the number of bits we flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;
	unsigned int flip = 0;
	unsigned long int bit;

	for (i = sizeof(unsigned long int) * 8 - 1; i >= 0; i--)
	{
		bit = (n ^ m) >> i;
		if (bit & 1)
			flip++;
	}

	return (flip);
}
