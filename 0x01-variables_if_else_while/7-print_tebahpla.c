#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char tebahpla = 'z';

	while (tebahpla >= 'a')
	{
		putchar(tebahpla);
		tebahpla--;
	}

	putchar('\n');
	return (0);
}
