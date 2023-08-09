#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - Print a chessboard
 * @a: The chessboard to be printed
 */
void print_chessboard(char (*a)[8])
{
	int e, l;

	for (e = 0; e < 8; e++)
	{
        for (l = 0; l < 8; l++)
	{
		_putchar(a[e][l]);
	}
	_putchar('\n');
	}
}
