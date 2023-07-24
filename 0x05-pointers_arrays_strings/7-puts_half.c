#include "main.h"

/**
 * puts_half - Prints the second half of a string
 * @str: Pointer to the string to be printed
 */
void puts_half(char *str)
{
    int length = 0;
    int i;

    while (str[length] != '\0')
        length++;

    int start_index = (length + 1) / 2;

    for (i = start_index; str[i] != '\0'; i++)
        _putchar(str[i]);

    _putchar('\n');
}

