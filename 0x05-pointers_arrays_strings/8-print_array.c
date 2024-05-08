#include <stdio.h>

/**
 *print_array - output function
 *@a: character pointer parameter
 *@n: integer parameter
 *Return: no return value
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
