#include "main.h"

/**
 * _sqrt_helper - Recursive helper function to find the natural square root.
 * @n: Number for which to calculate the square root.
 * @i: Iterator.
 *
 * Return: The resulting square root or -1 if not found.
 */
int actual_sqrt_recursion(int n, int i)
{
    int sqr;

    if (i > n / 2)
        return -1;

    sqr = i * i;

    if (sqr == n)
        return i;
    if (sqr > n)
        return -1;

    return actual_sqrt_recursion(n, i + 1);
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: Number to calculate the square root of.
 *
 * Return: The resulting square root or -1 if n is negative.
 */
int _sqrt_recursion(int n)
{
    if (n < 0)
        return -1;

    if (n == 0 || n == 1)
        return n;

    return actual_sqrt_recursion(n, 0);
}

