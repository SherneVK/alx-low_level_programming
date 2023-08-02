#include "main.h"

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

	return _sqrt_helper(n, 0, n);
}

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
	if (low > high)
		return -1;

	int mid = low + (high - low) / 2;
	int sqr = mid * mid;

	if (sqr == n)
		return mid;
	else if (sqr < n)
		return _sqrt_helper(n, mid + 1, high);
	else
		return _sqrt_helper(n, low, mid - 1);
}

