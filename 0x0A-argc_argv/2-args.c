#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 (sucessful)
 * @argc: integer
 * @argv: pointer to character array
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", *(argv + i));

	return (0);
}
