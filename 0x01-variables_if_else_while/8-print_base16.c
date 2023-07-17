#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char base16 = '0';

	do {
		putchar(base16);
		if (base16 == '9')
			base16 = 'a' - 1;
	}

	while
		(base16++ < 'f');

	putchar('\n');
	return (0);
}
