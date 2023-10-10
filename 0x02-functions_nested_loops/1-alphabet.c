#include "main.h"

/**
 *print_alphabet - function
 *Description: print all the letters of the alphabet
 *Return: Void (no return value)
 */
void print_alphabet(void)
{
	int i = 0;

	for (; i <= 25; i++)
	{
		_putchar('a' + i);
	}
	_putchar('\n');
}
