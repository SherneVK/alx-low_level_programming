#include "main.h"

/**
 * _sqrt_helper - uses binary search to find the natural square root
 * of a number within a range.
 * @n: number to calculate the square root of
 * @low: lower bound of the range
 * @high: upper bound of the range
 *
 * Return: the resulting square root, or -1 if not found
 */
int _sqrt_helper(int n, int low, int high)
{
	int mid;
	int sqr;

	if (low > high)
		return -1;

	mid = low + (high - low) / 2;
	sqr = mid * mid;

	if (sqr == n)
		return mid;
	else if (sqr < n)
		return _sqrt_helper(n, mid + 1, high);
	else
		return _sqrt_helper(n, low, mid - 1);
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 *
 * Return: the resulting square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return -1;

	if (n == 0 || n == 1)
		return n;

	return _sqrt_helper(n, 0, n / 2); // Adjust the upper bound for better efficiency
}

