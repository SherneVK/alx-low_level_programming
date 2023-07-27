/**
 * leet - Encodes a string into leetspeak.
 * @str: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *str)
{
	char *tr = str;
	char leet_map[] = {'A', 'E', 'O', 'T', 'L'};
	char leet_rep[] = {'4', '3', '0', '7', '1'};
	int e;

	while (*tr)
	{
		for (e = 0; e < 5; e++)
		{
			if (*tr == leet_map[e] || *tr == leet_map[e] + 32)
			{
				*tr = leet_rep[e];
				break;
			}
		}
		tr++;
	}

	return (str);
}
