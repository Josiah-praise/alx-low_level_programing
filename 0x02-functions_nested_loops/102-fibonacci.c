#include <stdio.h>

/**
 *main - Entry point
 *Return: 0 (sucessful)
 */
int main(void)
{
	int array[] = {0, 1};
	int n;

	for (n = 2; (sizeof(array) / sizeof(int)) != 50; n++)
	{
		array[n] = array[n - 1] + array[n - 2];
	}

	for (n = 0; n < 50; n++)
	{
		if (n != 49)
			printf("%d, ", array[n]);
		else
			printf("%d", array[n]);
	}
	printf("\n");
}
