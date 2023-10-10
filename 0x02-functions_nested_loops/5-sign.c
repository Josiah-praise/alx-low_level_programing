#include "main.h"
/**
 *print_sign - print_sign
 *@n: integer
 *Return: 1 if n > 0, 0 if n == 0, -1 if n < 0
 *Description: A fuction that prints the sign of a number
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');
	return (0);
}
