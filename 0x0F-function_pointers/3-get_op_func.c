#include "3-calc.h"

/**
 * get_op_func - Returns a function pointer corresponding to the operator.
 * @s: The operator passed as argument to the program.
 *
 * Return: A pointer to the corresponding function, or NULL
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int e = 0;

	while (ops[e].op)
	{
		if (*(ops[e].op) == *s && !s[1])
			return (ops[e].f);
		e++;
	}
	return (NULL);
}
