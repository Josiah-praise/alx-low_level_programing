#include <stdlib.h>
/**
 * int_index - a function that searches for an integer
 * @array: integer array
 * @size: size of array as an integer
 * @cmp: function pointer
 * Return: -1 if no element matches else, return index
 *          of thte first element for which cmp function
 *          doesn't return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
