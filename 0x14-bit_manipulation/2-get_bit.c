#include "main.h"

/**
 * get_bit - return the bit at that index
 * @n: a number
 * @index: the index to get
 * Return: the bit at that index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > BITS)
		return (-1);
	if ((1 << index) & n)
		return (1);
	return (0);
}
