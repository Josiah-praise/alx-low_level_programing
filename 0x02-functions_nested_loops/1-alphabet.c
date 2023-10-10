#include "main.h"

/**
 *print_alphabet - function
 *Description: print all the letters of the alphabet
 *Return: Void (no return value)
 */
void print_alphabet(void)
{
	int i = 0;
	char letter = 'a';

	for (; i <= 26; i++ )
	{
		_putchar('letter' + i);
	}
	_putchar('\n');
}
