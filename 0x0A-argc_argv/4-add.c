#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 *
 * Return: 0 if successful, 1 if there's an error
 */
int main(int argc, char *argv[])
{
    int e, l, s = 0;

    if (argc == 1)
    {
        printf("0\n");
        return (0);
    }

    for (e = 1; e < argc; e++)
    {
        for (l = 0; argv[e][l] != '\0'; l++)
        {
            if (!isdigit(argv[e][l]))
            {
                printf("Error\n");
                return (1);
            }
        }

        s += atoi(argv[e]);
    }

    printf("%d\n", s);

    return (0);
}
