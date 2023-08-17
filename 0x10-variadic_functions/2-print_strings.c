#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The string to be printed between strings.
 * @n: The number of strings passed to the function.
 * @...: The variable arguments (strings).
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
    va_list args;
    unsigned int i = 0;
    char *str;

    va_start(args, n);

    while (i < n)
    {
        str = va_arg(args, char *);

        if (str != NULL)
        {
            printf("%s", str);
        }
        else
        {
            printf("(nil)");
        }

        if (separator != NULL && i != n - 1)
        {
            printf("%s", separator);
        }

        i++;
    }

    printf("\n");
    va_end(args);
}

