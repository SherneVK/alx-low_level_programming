#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: The variable arguments (integers).
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int e = 0;

	va_start(args, n);

	while (e < n)
	{
		printf("%d", va_arg(args, int));

		if (separator != NULL && e != n - 1)
		{
			printf("%s", separator);
		}

		e++;
	}

	printf("\n");
	va_end(args);
}
