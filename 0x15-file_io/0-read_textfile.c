#include "main.h"

/**
 * read_textfile - Read a text file and prints it to the POSIX standard output.
 * @filename: File name.
 * @letters:The number of letters to be read and printed.
 * Return: The actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t n_characters;
	char *buffer = NULL;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = malloc(letters * sizeof(char));
	if (buffer == NULL)
		return (0);

	n_characters = read(fd, buffer, letters);

	if (n_characters < 0)
	{
		free(buffer);
		return (0);
	}

	n_characters = write(STDOUT_FILENO, buffer, n_characters);

	if (n_characters < 0)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(fd);

	return (n_characters);
}
