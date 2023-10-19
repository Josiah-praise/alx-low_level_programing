#include "main.h"
/**
 *print_number - utility function
 *@n: integer character
 *Return: no return value
 */
void print_number(int n)
{
	if (n < 0)
		n = -n;
	if (n < 10)
	{
		_putchar('0' + n);
	}
	else
	{
		print_number(n / 10);
		_putchar('0' + (n % 10));
	}
}
