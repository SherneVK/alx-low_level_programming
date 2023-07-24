#include "main.h"
#include <stddef.h>

/**
 * puts2 - Prints every other character of a string
 * @str: Pointer to the string to be printed
 */
void puts2(char *str)
{
	int index = 0;

	if (str == NULL)
		return;

	while (*str)
	{
		if (index % 2 == 0)
			_putchar(*str);
		str++;
		index++;
	}

	_putchar('\n');
}
