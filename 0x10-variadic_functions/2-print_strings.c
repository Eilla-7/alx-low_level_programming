#include<stdio.h>
#include<stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - print a string separated by another
 * @separator: the separator
 * @n: number of the arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
	{
		unsigned int i;
		char *ptr;
		va_list args;

		va_start(args, n);
		if (separator == NULL)
			return;

		for (i = 0; i < n; i++)
		{
			ptr = va_arg(args, char *);

			if (ptr == NULL)
				printf("nil");
			else
				printf("%s", ptr);

		if (i != (n - 1) && (separator != NULL))
		printf("%s", separator);
		}
	printf("\n");
	va_end(args);
	}
