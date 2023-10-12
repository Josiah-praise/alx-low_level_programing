#include "main.h"

/**
 *more_numbers - Name of functions
 *Return: No return value
 */
void more_numbers(void)
{
	int i, j;

	for (i = 10 ; i >= 1; i--)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
				_putchar('0' + (j / 10));
			_putchar('0' + (j % 10));
		}
		_putchar('\n');
	}
}
