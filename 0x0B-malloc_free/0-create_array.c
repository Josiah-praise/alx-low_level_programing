#include <stdlib.h>
/**
 *create_array - A function thats creates an array of chars
 *Return: pointer to array
 *@size: unsigned int
 *@c: character
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	ptr = (char *)malloc(size * sizeof(*ptr));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		*(ptr + i) = c;
	return (ptr);
}
