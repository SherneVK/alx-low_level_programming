#include "variadic_functions.h"

/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: The number of arguments.
 * @...: The variable arguments.
 *
 * Return: The sum of the parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int e;
	int sum = 0;

	va_start(args, n);

	for (e = 0; e < n; e++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);

	return (sum);
}
