#include <stdlib.h>

/**
 * _calloc - allocates space dynamically
 * @nmemb: the number of elements as an unsigned account
 * @size: the size in bytes as an unsined  int
 * Return: pointer to array
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arrlloc = NULL;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	/*Allocate memory*/
	arrlloc = malloc(nmemb * size);

	if (arrlloc == NULL)
		return (NULL);

	/*Incialize array with 0*/
	for (i = 0; i < nmemb * size; i++)
		arrlloc[i] = 0;

	return (arrlloc);
}
