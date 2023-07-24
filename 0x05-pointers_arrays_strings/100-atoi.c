#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: Pointer to the input string
 *
 * Return: The converted integer value
 */
int _atoi(char *s)
{
    int sign = 1;
    int num = 0;
    int i = 0;

    while (s[i] == ' ' || (s[i] >= 9 && s[i] <= 13))
        i++;

    while (s[i] == '-' || s[i] == '+')
    {
        if (s[i] == '-')
            sign *= -1;
        i++;
    }

    for (; s[i] >= '0' && s[i] <= '9'; i++)
    {
        num = num * 10 + (s[i] - '0');
    }

    return (num * sign);
}
