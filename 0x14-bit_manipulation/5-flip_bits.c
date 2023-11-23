#include "main.h"

/**
 * flip_bits - returns the number of bits you would need
 *             to flip to get from one number to another.
 * @n: the first number
 * @m: the other number
 * Return: the count of the bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	/*a = 110010  b = 110101 a ^ b = 000111*/
	unsigned int count = 0;
	unsigned long int a = n ^ m;

	while (a != 0)
	{
		if ((a & 1))
			count++;
		a = a >> 1;
	}
	return (count);
}
