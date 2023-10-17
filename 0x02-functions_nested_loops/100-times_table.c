#include "main.h"

void print_space(int, int);
void format(int);

/**
 *print_space - helper function
 *Return: No return value
 *@i: integer parameter
 *@j: integer parameter
 */
void print_space(int i, int j)
{
	_putchar(',');

	if ((i * (j + 1)) < 10)
	{
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
	}
	else if ((i * (j + 1)) > 9 && (i * (j + 1)) < 100)
	{
		_putchar(' ');
		_putchar(' ');
	}
	else
	{
		_putchar(' ');
	}
}

/**
 *format - helper function
 *Return: No return value
 *@product: integer parameter
 */
void format(int product)
{
	if (product < 10)
	{
		_putchar('0' + product);
	}
	else if (product > 9 && product < 100)
	{
		_putchar('0' + (product / 10));
		_putchar('0' + (product % 10));
	}
	else
	{
		int temp;

		_putchar('0' + (product / 100));
		temp = product % 100;
		_putchar('0' + (temp / 10));
		_putchar('0' + (temp % 10));
	}

}

/**
 *print_times_table - utility function
 *Return: no return value
 *@n: integer parameter
 *Description: prints (n) times table
 */
void print_times_table(int n)
{
	int i, j;

	if (!(n > 15) && !(n < 0))

		for (i = 0;  i <= n; i++)
		{
			for (j = 0;  j <= n; j++)
			{
				format((i * j));

				/*
				 *add spaces and commas only if not
				 *on the last iteration of j
				 */
				if (j != n)
					print_space(i, j);
			}
			_putchar('\n');
		}
}
