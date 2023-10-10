#include "main.h"

/**
 *print_last_digit - print last digit
 *@c: integer variable
 *Description: a function that prints the last digit of a number
 *Return: value of the last digit
 */
int print_last_digit(int c)
{
	if (c < 0)
		c = -c;
	_putchar('0' + (c % 10));
	return (c % 10);
}
