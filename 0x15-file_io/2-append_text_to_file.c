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
 * append_text_to_file - Append text at the end of a file.
 * @filename: File name.
 * @text_content: Text content to write.
 * Return: 1 (success), -1 (failure)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int no_char;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd < 0)
		return (-1);

	/*Write*/

	if (text_content != NULL)
	{
		no_char = _strlen(text_content);
		write(fd, text_content, no_char);
	}
	close(fd);
	return (1);
}
