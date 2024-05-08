#include <stdio.h>
#include <stdlib.h>

/**
 * _isdigit - Check for a digit (0 through 9).
 * @a: Charater to check
 * Return: 1 if a is a digit, return 0 otherwise.
 */

int _isdigit(int a)
{
	if (a >= '0' && a <= '9')
		return (1);
	else
		return (0);
}

/**
 * main - Add the given numbers.
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 * Return: 0 is succes.
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;
	char *c = NULL;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		c = argv[i];
		for (j = 0; c[j] != '\0'; j++)
		{
			if (_isdigit(c[j]) != 1)
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
