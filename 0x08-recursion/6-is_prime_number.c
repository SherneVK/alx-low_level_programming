#include "main.h"

/**
 * is_prime_recursive - helper function to check if a number is prime.
 * @n: The number to check for primality.
 * @i: The current divisor being tested.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_recursive(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);
	if (n % i == 0)
		return (0);
	if (i * i > n)
		return (1);

	return (is_prime_recursive(n, i + 1));
}

/**
 * is_prime_number - Checks if a number is prime.
 * @n: The input integer to be checked.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	return (is_prime_recursive(n, 2));
}
