#include "main.h"
/**
  *_strlen - helper function
  *@s: character pointer;
  *Return: lenght of the string
  */
int _strlen(char *s)
{
	int size;

	for (size = 0; s[size] != '\0'; size++)
		continue;
	return (size);
}

/**
 *_strcpy - output function
 *@dest: character pointer parameter
 *@src: character pointer parameter
 *Return: pointer
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = _strlen(src);

	for (i = 0; i < len; i++)
		*(dest + i) = src[i];
	*(dest + len) = '\0';
	return (dest);
}
