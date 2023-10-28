#include <stdio.h>
#include <stdlib.h>

/**
 *main - Entry point
 *Return: 0 (sucessfull)
 *@argc: integer
 *@argv: pointer to string
 */
int main(int argc, char *argv[])
{
	int i, sum = 0, error = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (!(argv[i][0] >= '0' && argv[i][0] <= '9'))
			{
				printf("Error\n");
				error++;
			}
			else
			{
				sum += atoi(*(argv + i));
			}
		}
		if (!error)
			printf("%d\n", sum);
	}
	return (0);

}
