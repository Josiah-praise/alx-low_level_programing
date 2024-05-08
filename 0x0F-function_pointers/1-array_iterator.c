#include <stdlib.h>
/**
 * array_iterator - executes a function on all elements of array
 * @array: integer array
 * @size: size of array as unsigned int
 * @action: pointer to function
 * Return: no return value
 */
void array_iterator(int *array, size_t size, void(*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
