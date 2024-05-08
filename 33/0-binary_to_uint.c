#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: string of 0(s) and 1(s) characters
 * Return: the decimal representation of the string
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (b == NULL)
		return (0);
	/*traverse the string*/
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);

		num = (num << 1) | (*b - '0');
		b++;
	}
	return (num);
}
