#include "main.h"
/**
 * _strlen - Count the length of a string.
 * @str: String.
 * Return: Length.
 */
int _strlen(char *str)
{
	unsigned int count;

	for (count = 0; str[count]; count++)
		;
	return (count);
}

/**
 * create_file - Create a file.
 * @filename: File name.
 * @text_content: Text content to write.
 * Return: 1 (success), -1 (failure)
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int n_characters;

	if (filename == NULL)
		return (-1);

	/*Create file*/
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd < 0)
		return (-1);

	/*Write*/

	if (text_content != NULL)
	{
		n_characters = _strlen(text_content);
		write(fd, text_content, n_characters);
	}
	close(fd);
	return (1);
}
