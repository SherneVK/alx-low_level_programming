#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 * @n: The integer for which absolute value is to be computed
 *
 * Return: The absolute value of n
 */
int _abs(int n)
{
	int mask = n >> (sizeof(int) * 8 - 1);

	return ((n + mask) ^ mask);
}
