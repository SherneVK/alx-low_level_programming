#include "main.h"

/**
 * flip_bits - Returns the number of bits you would need to flip to get from
 *             one number to another.
 * @n: The first number.
 * @m: The second number.
 * Return: The number of bits to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int dif = n ^ m;
	unsigned int tel = 0;

	while (dif)
	{
		tel += dif & 1;
		dif >>= 1;
	}

	return (tel);
}
