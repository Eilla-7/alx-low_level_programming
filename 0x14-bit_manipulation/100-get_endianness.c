#include "main.h"
/**
 * get_endianness - a function that checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned long int n = 1;
	char *byte = (char *)&n;

	if (*byte == 1)
		return (1);
	else
		return (0);

	/*return (*(char *)&n);*/
}
