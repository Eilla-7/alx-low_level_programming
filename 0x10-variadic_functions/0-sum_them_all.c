#include "variadic_functions.h"
#include<stdarg.h>
/**
 * sum_them_all - a function to sum many integers
 * @n: the number of the integers
 * Return: the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, num, sum = 0;

	va_list args;

	va_start(args, n);

	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		sum += num;
	}
	va_end(args);
	return (sum);
}
