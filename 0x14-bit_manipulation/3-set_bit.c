#include "main.h"

/**
 * set_bit - set the nth bit of a number
 * @n: the number
 * @index: the index of the bit
 * Return: 1 (successful) or -1(failed)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int a;

	if (n == NULL || index > BITS)
		return (-1);

	/*check if bit is already set*/
	a = (1 << index) & *n;
	if (a > 0)
		return (-1);
	/*if bit ain't set, then set*/
	a = (1 << index) | *n;
	*n = a;
	return (1);
}
