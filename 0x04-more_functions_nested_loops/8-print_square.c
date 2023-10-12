#include "main.h"

/**
 *print_square - function name
 *@size: integer parameter
 *Return: no return value
 */
void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < 10; i++)
		{
			for (j = 0; j < 10; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
