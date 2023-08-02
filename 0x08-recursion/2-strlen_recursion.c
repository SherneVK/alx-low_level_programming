#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string whose length is to be determined.
 * 
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
    if (*s == '\0') // Base case: end of string
        return 0;
    
    return _strlen_recursion(s + 1) + 1; // Recurse with the next character and then add 1
}
