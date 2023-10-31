#include <stdlib.h>

/**
 *count_word - returns the number of words in the string
 *@str: pointer to character
 *Return: number of words as an integer
 */
int count_word(char *str)
{
	int count = 0, i;

	for (i = 0; *str; i++, str++)
	{
		if (i != 0 && *str != ' ' && *(str - 1) == ' ')
			count++;
		else if (i == 0 && *str != ' ')
			count++;
	}
	return (count);
}

/**
 *startptr - retuen the address of the first word
 *@str: charcter pointer
 *Return: pointer to pointer
 *Description: this goes through the string and gets the address of the first
 *letters of all the words and adds them to a dynamically alocated array
 */
char **startptr(char *str)
{
	int i;
	char **wordptr = (char **) malloc((count_word(str)) * sizeof(char *)), **temp;

	if (wordptr == NULL)
		return (NULL);
	temp = wordptr;

	for (i = 0; *str; i++, str++)
	{
		if (i != 0 && *str != ' ' && *(str - 1) == ' ')
		{
			*(temp) = str;
			temp++;
		}
		else if (i == 0 && *str != ' ')
		{
			*(temp) = str;
			temp++;
		}
	}
	return (wordptr);
}

/**
 *word_len - returns a dyynamically allocated array containing the length
 *of each word
 *@startptr: the result of the funtion startptr
 *@str: the string
 *Return: an array of integers
*/
int *word_len(char **startptr, char *str)
{
	int i, j, count;

	/*allocating space for an array of integers*/
	int *ptr = (int *) malloc(count_word(str) * sizeof(*ptr));

	if (ptr != NULL)
	{
		for (i = 0; i < count_word(str); i++)
		{
			for (j = 0, count = 0; startptr[i][j] != ' '; j++)
				count++;
			ptr[i] = count;
		}
	}
	else
		return (NULL);
	return (ptr);
}

/**
 *strtow - a function that splits a string into words
 *@str: the string to split
 *Return: a 2d array of the words in the strings of succesful
 *			and NULL if unsucessful
 */
char **strtow(char *str)
{
	int no_words, i = 0, j, *wordlen;
	char **ptr, **start;

	if (str == NULL || *str == '\0')
		return (NULL);
	no_words = count_word(str);
	if (no_words == 0)
		return (NULL);
	ptr = (char **) malloc(sizeof(char *) * ((no_words) + 1));
	start = startptr(str);
	wordlen = word_len(start, str);
	if (ptr == NULL)
		return (NULL);
	while (i < no_words)
	{
		ptr[i] = (char *) malloc(sizeof(char) * (wordlen[i] + 1));
		if (ptr[i] == NULL)
		{
			for (; i >= 0; --i)
				free(ptr[i]);
			free(ptr);
			return (NULL);
		}
		i++;
	}
	ptr[i] = NULL; /*to set the last char * to NULL*/
	for (i = 0; i < no_words; i++)
	{
		for (j = 0; j < wordlen[i]; j++)
		{
			ptr[i][j] = start[i][j];
		}
		ptr[i][j] = '\0';
	}
	free(start);
	free(wordlen);
	return (ptr);
}
