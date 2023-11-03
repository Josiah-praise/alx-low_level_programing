#include <stdlib.h>

/**
 * _calloc - allocates space dynamically
 * @nmemb: the number of elements as an unsigned account
 * @size: the size in bytes as an unsined  int
 * Return: pointer to array
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = (char *) malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
		ptr[i] = 0;

	return (ptr);
}
