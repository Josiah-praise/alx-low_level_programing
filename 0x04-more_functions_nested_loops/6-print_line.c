#include "main.h"

/**
 *print_line - Name of funciton
 *Return: no return value
 *@n: integer parameter n
 */
void print_line(int n)
{
	int i;


	if (n > 0)
	{
		for (i = 1; i < (n + 1); i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
