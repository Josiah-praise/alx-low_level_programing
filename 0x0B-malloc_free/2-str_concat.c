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
 *allocate_memory - allocates the appropriate space for s1 and s2
 *@s1: first string
 *@s2: second string
 *Return: returns a pointer to the allocated array
 */

char *allocate_memory(char *s1, char *s2)
{
	int size1 = 0, size2 = 0, size = 0;
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
	return (ptr);
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
	char *ptr, *s;

	ptr = allocate_memory(s1, s2);
	if (ptr == NULL)
		return (NULL);
	if (s1 != NULL && s2 == NULL)
	{
		size = _strlen(s1);
		s = s1;
	}
	if (s1 == NULL && s2 != NULL)
	{
		size = _strlen(s2);
		s = s2;
	}
	if ((s1 != NULL && s2 == NULL) || (s1 == NULL && s2 != NULL))
	{
		for (i = 0; i < size; i++)
			ptr[i] = s[i];
		ptr[i] = '\0';
	}
	else
	{
		size1 = _strlen(s1);
		size2 = _strlen(s2);
		for (i = 0; i < size1; i++)
			ptr[i] = s1[i];
		for (j = 0; i < (size1 + size2); i++, j++)
			ptr[i] = s2[j];
		ptr[i] = '\0';
	}
	return (ptr);
}
