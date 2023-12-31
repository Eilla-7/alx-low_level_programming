#include "main.h"
/**
 * set_bit - a function that sets the value of a bit to 1 at
 * a given index.
 * @n: pint to the number to change
 * @index: index of the bit to set
 * Return: 1 in success
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8 - 1)
		return (-1);

	*n = *n | (1 << index);
	return (1);
}
