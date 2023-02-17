#include <stdio.h>
/**
 * main - print all single digit numbers of base 10 starting from 0
 * followed by a new line
 *
 * Return: 0
 */

int main(void)
{
	int x;

	x = 0;
	while
		(x < 10) {
			putchar(x + '0');
			x++;
		}
	putchar('\n');
	return (0);
}
