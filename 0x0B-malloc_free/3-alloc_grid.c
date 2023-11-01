#include <stdlib.h>

/**
 *alloc_grid - grid grid of specified width and height
 *@width: width of grid as integer
 *@height: height of grid as integer
 *Return: a pointer to 2d array
 */
int **alloc_grid(int width, int height)
{
	/*allocate space for the rows*/
	int **array;
	int i, j;

	if (height == 0 && width == 0)
		return (NULL);
	array = (int **) malloc(height * sizeof(int *));
	if (array == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		*(array + i) = (int *) malloc(width * sizeof(int));

		if (array[4] == NULL)
		{
			for (; i >= 0; --i)
				free(array[i]);
			free(array);
			return (NULL);
		}
	}

	for  (i = 0; i < height; i++)          
		for (j = 0; j < width; j++)
			if (array[i] != NULL)
				array[i][j] = 0;
	return (array);
}
