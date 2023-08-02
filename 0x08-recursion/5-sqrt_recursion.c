#include "main.h"

/**
 * sqrt_checker - Helper function to calculate the square root using recursion.
 * @n: The number for which to calculate the square root.
 * @guess: The current guess for the square root.
 *
 * Return: The natural square root of n, or -1 if it doesn't have one.
 */
int sqrt_checker(int n, int guess)
{
    int sqr = guess * guess;

    if (sqr == n) // Found the square root
        return guess;
    if (sqr > n) // No natural square root
        return -1;

    // Continue searching
    return sqrt_checker(n, guess + 1);
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number for which to calculate the square root.
 * 
 * Return: The natural square root of n, or -1 if it doesn't have one.
 */
int _sqrt_recursion(int n)
{
    if (n < 0) // Error case: negative number
        return -1;

    if (n == 0 || n == 1) // Base cases: square root of 0 and 1 is itself
        return n;

    return sqrt_checker(n, 1); // Start checking from guess = 1
}
