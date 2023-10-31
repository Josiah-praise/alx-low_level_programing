#include <stdlib.h>

/**
 *_strlen - helper function
 *@s: character pointer
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
 *str_concat - concatenate two strings
 *Return: pointer to new string
 *@s1: first source string
 *@s2: second source string
 */
char *str_concat(char *s1, char *s2)
{
	int size1 = 0, size2 = 0, size = 0;
	int i, j;
	char *ptr;

	if (s1 == NULL && s2 != NULL)
	{
		size = _strlen(s2);
		ptr = (char *) malloc((size + 1) * sizeof(*ptr));
	}
	else if (s1 != NULL && s2 == NULL)
	{
		size = _strlen(s1);
		ptr = (char *) malloc((size + 1) * sizeof(*ptr));
	}
	else if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}
	else
	{
		size1 = _strlen(s1);
		size2 = _strlen(s2);
		ptr = (char *) malloc((size1 + size2 + 1) * sizeof(*ptr));
	}

	if (ptr == NULL)
		return(NULL);

	if ((s1 != NULL && s2 == NULL) || (s1 == NULL && s2 != NULL))
	{
		for (i = 0; i < size; i++)
			ptr[i] = s1[i];
		ptr[i] = '\0';
	}
	else
	{
		for (i = 0; i < size1; i++)
			ptr[i] = s1[i];
		for (j = 0; i < (size1 + size2); i++, j++)
			ptr[i] = s2[j];
		ptr[i] = '\0';
	}
	return (ptr);
}
