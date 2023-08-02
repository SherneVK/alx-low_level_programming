#include "main.h"

/**
 * is_prime_number - Checks if a number is prime.
 * @n: The input integer to be checked.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
    int i;

    if (n <= 1)
        return 0; /* Not a prime if less than or equal to 1 */

    if (n <= 3)
        return 1; /* 2 and 3 are prime */

    if (n % 2 == 0 || n % 3 == 0)
        return 0; /* Divisible by 2 or 3, not prime */

    /* Check divisibility by numbers of the form 6k ± 1 */
    for (i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return 0; /* Divisible, not prime */
    }

    return 1; /* If not divisible by any smaller primes, then it's prime */
}

