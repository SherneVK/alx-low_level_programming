#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - Prints strings.
 * @separator: The string to be printed between strings.
 * @n: The number of strings passed to the function.
 * @...: The variable arguments.
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int e = 0;
	char *st;

	va_start(args, n);

	while (e < n)
	{
		st = va_arg(args, char *);

		if (st != NULL)
		{
			printf("%s", st);
		}
		else
		{
			printf("(nil)");
		}

		if (separator != NULL && e != n - 1)
		{
			printf("%s", separator);
		}

		e++;
	}
	printf("\n");
	va_end(args);
}
