#include "main.h"
#include <stddef.h>

/**
 * puts2 - Prints every other character of a string, starting with the first character
 * @str: Pointer to the string to be printed
 */
void puts2(char *str)
{
    if (str == NULL)
        return;

    int index = 0;
    while (*str)
    {
        if (index % 2 == 0)
            _putchar(*str);
        
        str++;
        index++;
    }

    _putchar('\n');
}

