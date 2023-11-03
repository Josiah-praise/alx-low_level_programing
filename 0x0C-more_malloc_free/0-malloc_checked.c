#include <stdlib.h>
/**
 *malloc_checked - allocate memory using malloc
 *@b: amount of memory to be allocated as an unsigned int
 *Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);
	return (p);
}
