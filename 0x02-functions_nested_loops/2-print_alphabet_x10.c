#include "main.h"
/**
 *print_alphabet_x10 - print alphabet
 *Description: uses the printalphabet function 10x
 *Return: Void (no return value)
 */

void print_alphabet_x10(void)
{
	int i = 0, a;


	for (; i < 10; i++)
	{
		for (a = 0; a < 26; a++)
		{
			_putchar('a' + a);
		}
		_putchar('\n');
	}
}
