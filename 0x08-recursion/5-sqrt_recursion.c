#include "main.h"

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

    int guess = n / 2; // Start with a guess halfway between 0 and n

    return _sqrt_helper(n, guess);
}

/**
 * _sqrt_helper - Helper function to calculate the square root using recursion.
 * @n: The number for which to calculate the square root.
 * @guess: The current guess for the square root.
 * 
 * Return: The natural square root of n, or -1 if it doesn't have one.
 */
int _sqrt_helper(int n, int guess)
{
    int sqr = guess * guess;

    if (sqr == n) // Found the square root
        return guess;
    if (sqr > n || guess == 0) // No natural square root or end of search
        return -1;

    // Continue searching with adjusted guess
    return _sqrt_helper(n, guess - 1);
}

