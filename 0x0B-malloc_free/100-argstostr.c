#include <stdlib.h>
/**
 *_strlen - helper function
 *@s: character pointer;
 *Return: lenght of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}

/**
 *count - count the number of elements in a 2d array
 *@array: 2darray
 *@rows: the number of rows as an integer
 *Return: the number of elements in the 2d array as an integer
*/
int count(char **array, int rows)
{
	int counter = 0, i, j;


	for (i = 0; i < rows; i++)
		for (j = 0; *(*(array + i) + j); j++)
			counter++;

	return (counter);
}

/**
 *argstostr - concatenates all srguments to your program
 *Return: pointer to string in heap
 *@ac: Number of arguments passed as integer
 *@av: pointer to pointer to character
*/
char *argstostr(int ac, char **av)
{
	int len, i, j, ptr_index;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);

	/*get the total length of the strings using the count function*/
	len = count(av, ac);

	/**
	 *allocate contigious block for len + 1 + ac for '\0'
	 *and a new line character after every string
	 */
	ptr = (char *) malloc((len + 1 + ac) * sizeof(*ptr));
	ptr_index = -1;

	if (ptr != NULL)
	{
		/*iterate through each character of the 2d array*/
		for (i = 0; i < ac; i++)
		{
			j = 0;
			for (ptr_index++; av[i][j]; j++, ptr_index++)
			{
				*(ptr + ptr_index) = av[i][j];
			}
			/*add a new line after concatenating a string*/
			ptr[ptr_index] = '\n';
		}
		/*add a null byte after concatinating all strings*/
		ptr[++ptr_index] = '\0';
	}
	else
		return (NULL);
	return (ptr);
}
