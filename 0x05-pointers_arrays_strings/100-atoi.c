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

    while (s[i] >= '0' && s[i] <= '9')
    {
        if (num > (INT_MAX / 10) || (num == INT_MAX / 10 && (s[i] - '0') > INT_MAX % 10))
        {
            return (sign == 1 ? INT_MAX : INT_MIN);
        }

        num = num * 10 + (s[i] - '0');
        i++;
    }

    return (num * sign);
}

