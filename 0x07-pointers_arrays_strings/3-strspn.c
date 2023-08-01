#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: Pointer to the string to be scanned.
 * @accept: Pointer to the string containing the bytes to match.
 *
 * Return: Number of bytes in the initial segment of s which consist
 *         only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
    unsigned int c = 0;
    int f;

    while (*s)
    {
        f = 0;
        for (int i = 0; accept[i]; i++)
        {
            if (*s == accept[i])
            {
                f = 1;
                break;
            }
        }
        if (f == 0)
            break;
        c++;
        s++;
    }

    return (c);
}
