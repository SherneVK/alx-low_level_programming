#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: The number of arguments.
 * @av: An array of strings containing the arguments.
 *
 * Return: A pointer to the concatenated string, or NULL on failure.
 */
char *argstostr(int ac, char **av)
{
	int total_length = 0, i, j;
	char *concatenated;
	int k = 0;

	if (ac <= 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		total_length += strlen(av[i]) + 1;

	concatenated = (char *)malloc((total_length + 1) * sizeof(char));

	if (concatenated == NULL)
		return (NULL);


	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			concatenated[k++] = av[i][j];
		concatenated[k++] = '\n';
	}
	concatenated[k] = '\0';

	return (concatenated);
}
