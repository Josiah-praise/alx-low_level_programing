#include "main.h"

/**
 *size - utility function
 *@str: a parameter of type char *
 *Return: the size of the string
 */
int size(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; i++)
		continue;
	return (i + 1);
}


/**
 *_strncat - string utility function
 *@dest: a parameter of type char *
 *@src: a parameter of type char *
 *@n: integer parameter
 *Return: pointer to the dest string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, strlen_dest = size(dest) - 1, strlen_src = size(src);

	/**
	 *this makes the assumption that the dest is large enough
	 *to accomodate the source
	 */
	if (n > strlen_src)
		n = strlen_src;
	for (i = 0; i < n; i++)
		dest[strlen_dest + i] = src[i];
	dest[strlen_dest + i] = '\0';
	return (dest);
}

