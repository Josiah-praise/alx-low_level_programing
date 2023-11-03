#include <stdlib.h>

/**
 *_strlen - helper function
 *@s: character pointer
 *Return: lenght of the string
 */
unsigned int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return ((unsigned int) i);
}

/**
 *allocate_memory - allocates the appropriate space for s1 and s2
 *@s1: first string
 *@s2: second string
 *@n: number of bytes from s2
 *Return: returns a pointer to the allocated array
 */

char *allocate_memory(char *s1, char *s2, unsigned int n)
{
	unsigned int size1 = 0, size2 = 0, size = 0;
	char *ptr;

	if (s1 == NULL && s2 != NULL)
	{
		size = (n > _strlen(s2)) ? _strlen(s2) : n;
		ptr = (char *) malloc((size + 1) * sizeof(*ptr));
	}
	else if (s1 != NULL && s2 == NULL)
	{
		size = _strlen(s1);
		ptr = (char *) malloc((size + 1) * sizeof(*ptr));
	}
	else if (s1 == NULL && s2 == NULL)
	{
		ptr = (char *) malloc(1 * sizeof(char));
	}
	else
	{
		size1 = _strlen(s1);
		size2 = (n > _strlen(s2)) ? _strlen(s2) : n;
		ptr = (char *) malloc((size1 + size2 + 1) * sizeof(*ptr));
	}
	return (ptr);
}

/**
 *string_nconcat - concatenate two strings
 *Return: pointer to new string
 *@s1: first source string
 *@s2: second source string
 *@n: number of bytes to copy from s2 as unsigned int
 */
char *string_nconcat(char *s1, char *s2, unsigned int  n)
{
	unsigned int size1 = 0, size2 = 0, size = 0;
	unsigned int i, j;
	char *ptr, *s;

	ptr = allocate_memory(s1, s2, n);
	if (ptr == NULL)
		return (NULL);
	if (s1 == NULL && s2 == NULL)
	{
		*ptr = '\0';
		return (ptr);
	}
	if (s1 != NULL && s2 == NULL)
	{
		size = _strlen(s1);
		s = s1;
	}
	if (s1 == NULL && s2 != NULL)
	{
		size = (n > _strlen(s2)) ? _strlen(s2) : n;
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
		size2 = (n > _strlen(s2)) ? _strlen(s2) : n;
		for (i = 0; i < size1; i++)
			ptr[i] = s1[i];
		for (j = 0; i < (size1 + size2); i++, j++)
			ptr[i] = s2[j];
		ptr[i] = '\0';
	}
	return (ptr);
}
