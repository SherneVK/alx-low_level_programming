/**
 * leet - Encodes a string into leetspeak.
 * @str: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *str)
{
    char *ptr = str;
    char leet_map[] = {'A', 'E', 'O', 'T', 'L'};
    char leet_rep[] = {'4', '3', '0', '7', '1'};
    int i;

    while (*ptr)
    {
        for (i = 0; i < 5; i++)
        {
            if (*ptr == leet_map[i] || *ptr == leet_map[i] + 32)
            {
                *ptr = leet_rep[i];
                break;
            }
        }
        ptr++;
    }

    return str;
}
