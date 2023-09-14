#include "variadic_functions.h"
#include<stdarg.h>
#include<stdio.h>
/**
 *  print_numbers - funciton to prints numbers
 *  @separator: a string to be printed between numbers
 *  @n: the number of the numbers :)
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, _va;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		_va = va_arg(args, int);
		printf("%d", _va);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);

}
