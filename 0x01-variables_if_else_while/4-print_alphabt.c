#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		switch (letter)
		{
			case 'e':
			case 'q':
				break;
			default:
				putchar(letter);
		}
	}

	putchar('\n');
	return (0);
}
