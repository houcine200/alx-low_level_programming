#include "3-calc.h"
/**
 * get_op_func - function pointer to compute given an operator
 * @s: the operator given as an input
 * Return: pointer to the function that will do the op given as
 * parameter as input
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

	int i = 0;

	while (i < (int)(sizeof(ops) / sizeof(op_t)))
	{
		if (strcmp(s, ops[i].op) == 0)
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
