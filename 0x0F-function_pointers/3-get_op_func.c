#include "3-calc.h"

/**
 * get_op_function - selects correct function to perform the operation
 * @s: character array
 * Return: pointer to a function
 */
int (*get_op_function(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"/", op_div},
		{"%", op_mod},
		{"*", op_mul},
		{NULL, NULL}
	};

	int i;

	if (s == NULL)
		return (NULL);
	i = 0;
	while (i < 5)
	{
		if (*((ops + i)->op) == *s && *(s + 1) == '\0')
			return ((ops + i)->f);
		i++;
	}
	printf("Error\n");
	exit(99);
	return (NULL);
}
