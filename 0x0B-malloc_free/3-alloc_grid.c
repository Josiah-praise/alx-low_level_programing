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
	int **array = (int **) malloc(height * sizeof(int *));
	int i, j;

	if (array != NULL)
	{
		for (i = 0; i < height; i++)
		{
			*(array + i) = (int *) malloc(width * sizeof(int));
		}

		for  (i = 0; i < height; i++)
			for (j = 0; j < width; j++)
			{
				if (array[i] != NULL)
				{
					*(*(array + i) + j) = 0;
				}
			}
	}
	else
		return (NULL);
	return (array);
}
