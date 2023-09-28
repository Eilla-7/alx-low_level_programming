#include "main.h"
/**
 * binary_to_uint - a function that converts a binary
 * number to an unsigned int
 * @b:s pointing to a string of 0 and 1 chars
 * Return: 0 if b is null or contain not 1 or 0
 * unsigned int representing the decimal number in success
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int decimal = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);

		decimal = 2 * decimal + (b[i] - '0');
		/**
		 * b = 1001;
		*decimal = 0;
		*decimal = 2 * 0 + 1;
		*decimal = 1;
		*decimal = 2 * 1 + 0;
		*decimal = 2;
		*decimal = 2 * 2 + 0;
		*decimal = 4;
		*decimal = 2 * 4 + 1;
		*decimal = 9;
		*/
	}
	return (decimal);
}
