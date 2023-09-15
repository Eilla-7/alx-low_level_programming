#include "variadic_functions.h"
#include<stdio.h>
#include<stdarg.h>
/**
 * print_all - a function to print anything
 * @format: the format of the printed value
 *
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *ptr, *s = "";
	va_list args;

	va_start(args, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", s, va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", s, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", s, va_arg(args, double));
					break;
				case 's':
					ptr = va_arg(args, char *);
					if (!ptr)
						ptr = "(nil)";
					printf("%s%s", s, ptr);
					break;
				default:
					i++;
					continue;
			}
			s = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(args);
}
