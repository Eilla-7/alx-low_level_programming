#include "main.h"
/**
 * get_bit -  a function that returns the value of
 * a bit at a given index
 * @n: the number to get the bit from
 * @index: the index of the bit
 * Return: the value of the bit at index index in success
 * -1 if error accured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	if (index > sizeof(n) * 8 - 1)
		return (-1);

	value = (n >> index) & 1;

	return (value);
}
