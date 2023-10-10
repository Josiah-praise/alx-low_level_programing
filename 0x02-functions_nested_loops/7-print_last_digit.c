#include "main.h"
/**
 *print_last_digit - print last digit
 *@c: integer variable
 *Description: a function that prints the last digit of a number
 *Return: value of the last digit
 */
int print_last_digit(int c)
{
	int i;

	i = c % 10;
	if (i < 0)
		i = -i;
	_putchar('0' + i);
	return (i);
}
