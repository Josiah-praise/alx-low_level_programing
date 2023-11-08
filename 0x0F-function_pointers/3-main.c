#include "3-calc.h"

/**
 * main - Entry point
 * @argc: command line argument count
 * @argv: array of strings
 * Return: 0 (sucessful) otherwise fail
 */
int main(int argc, char *argv[])
{
	int a, b, answer;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	f = get_op_function(argv[2]);

	if (f == NULL)
		return (-1);

	answer = f(a, b);
	printf("%d\n", answer);

	return (0);
}
