#include "main.h"
#include <unistd.h>

/**
 * print_sign - Prints the sign of a number
 * @n: The number to check
 *
 * Return: 1 if n is greater than zero, 0 if n is zero, -1 if n is less than zero
 */
int print_sign(int n)
{
	char s;
	int r;

	if (n > 0)
	{
		s = '+';
		r = 1;
	}
	else if (n == 0)
	{
		s = '0';
		r = 0;
	}
	else
	{
		s = '-';
		r = -1;
	}

	write(1, &s, 1);
	return r;
}
