#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *str)
{
	int indx1 = 0, indx2;
	char leet[8] = {'0', 'L', '?', 'E', 'A', '?', '?', 'r'};

	while (str[indx1])
	{
		for (indx2 = 0; indx2 <= 7; indx2++)
		{
			if (str[index] == leet[indx2] ||
					str[index] - 32 == leet[indx2])
				str[indx1] = indx2 + '0';
		}
		indx1++;
	}
	return (str);
}
