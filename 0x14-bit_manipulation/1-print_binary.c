#include "main.h"
/**
 * print_binary - print the binary representation of a number
 * @n: the number
 */
void print_binary(unsigned long int n)
{
	unsigned long a = n;
	int b = 0;
	int c = 0;
	int bits = (sizeof(unsigned long int) * 8) - 1;

	if (n == 0)
		_putchar(n + '0');

	for (; bits >= 0; a = n)
	{
		b = ((a >> bits--) & 1);
		if (b == 1 && c == 0)
		{
			_putchar(b + '0');
			c++;
		}
		else if (c > 0)
		{
			_putchar(b + '0');
		}
	}
}
