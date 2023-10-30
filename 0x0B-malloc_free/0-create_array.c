#include <stdlib.h>
/**
 *create_array - A function thats creates an array of chars
 *Return: pointer to array
 *@size: unsigned int
 *@c: character
 */
char *create_array(unsigned int size, char c)
{
	char *ptr = (char *)malloc(size * sizeof(*ptr));
	unsigned int i;

	if (ptr != NULL)
	{
		for (i = 0; i < size; i++)
			*(ptr + i) = c;
	}
	else
	{
		return (NULL);
	}
	return (ptr);
}
