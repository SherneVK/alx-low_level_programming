#include <stdio.h>
/**
 * main - main block
 * print the alphabet in lowercase
 * and then in uppercase, followed by a new line
 * Return: 0
 */
int main(void)
{
	char c;

	char x;

	c = 'a';
	x = 'A';
	while
		(c <= 'z') {
			putchar(c);
			c++;
		}
	while
		(x <= 'Z') {
			putchar(x);
			x++;
		}
	putchar('\n');
	return (0);
}
