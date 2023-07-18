#include "main.h"

/**
 * main - Entry point of the program
 *
 * Description: Prints "_putchar" followed by a new line using the _putchar function
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *i = "_putchar\n";

	while (*i)
	{
		_putchar(*i);
		i++;
	}

	return (0);
}
