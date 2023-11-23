#include "main.h"

/**
 * clear_bit - clear the bit at the nth position
 * @n: pointer to number
 * @index: the index to clear
 * Return: 1 (successful) or -1(failed)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int a;

	if (n == NULL || index > BITS)
		return (-1);

	/*check if bit is already set*/
	a = (1UL << index) & *n;/* a=0 if not set and a>0 if set*/

	/*if index is set*/
	if (a != 0)
	{
		*n = *n & ~(1UL << index);
		return (1);
	}
	return (-1);
}
