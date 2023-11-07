#include <stdlib.h>
/**
 *malloc_checked - allocate memory using malloc
 *@b: amount of memory to be allocated as an unsigned int
 *Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
