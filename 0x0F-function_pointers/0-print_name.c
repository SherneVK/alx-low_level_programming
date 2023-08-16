#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Prints a name using a given printing function.
 * @name: Pointer to the name to be printed.
 * @f: Pointer to a function that specifies the printing behavior.
 *
 * Return: None.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
