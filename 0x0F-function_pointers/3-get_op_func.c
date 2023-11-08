#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - selects the correct function to perfrom
 * the operation asked by the user
 * @char: string
 * Return: a pointer to a function with an integer return value and
 * two integer arguments
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (i < 5)
	{
		if (*ops[i].op == *s && *(s + 1) == 0)
		{
			return (ops[i].f);
		}
		i++;
	}
	printf("Error\n");
	exit(99);
}
