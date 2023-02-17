#include <stdio.h>
/**
 * main - print all the numbers of base 16 in lowercase
 * followed by a new line
 *
 * Return: 0
 */

int main(void)
{
	char x;

	int w;

	x = 'a';
	w = 0;
	while
		(w < 10) {
			putchar(w + '0');
			w++;
		}
	while
		(x <= 'f') {
			putchar(x);
			x++;
		}
	putchar('\n');
	return (0);
}
