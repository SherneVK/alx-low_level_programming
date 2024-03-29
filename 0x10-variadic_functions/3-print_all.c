#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - Prints anything based on the format provided.
 * @format: The format string specifying the types of arguments.
 * @...: The variable arguments.
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int e = 0;
	char *separator = "";

	va_start(args, format);

	while (format && format[e])
	{
		switch (format[e])
		{
			case 'c':
				printf("%s%c", separator, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(args, double));
				break;
			case 's':
				{
					char *st = va_arg(args, char *);

					if (st == NULL)
						st = "(nil)";
					printf("%s%s", separator, st);
				}
				break;
			default:
				e++;
				continue;
		}

		separator = ", ";
		e++;
	}
	printf("\n");
	va_end(args);
}
