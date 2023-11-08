#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - add a and b
 * @a: integer
 * @b: integer
 * Return: sum of a and b as integer
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calculates the difference of a and b
 * @a: integer
 * @b: integer
 * Return: returns the  difference of a
 *         and b as integer
 */
int op_sub(int a, int b)
{
	return ((a > b) ? (a - b) : (b - a));
}

/**
 * op_mul - multiply a and b
 * @a: integer
 * @b: integer
 * Return: product of a and b as integer
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide a by b
 * @a: integer
 * @b: integer
 * Return: division of a by b as integer
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - divide a by b and return the remainder
 * @a: integer
 * @b: integer
 * Return: remainder of division of a by b as integer
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error");
		exit(100);
		}
	return (a % b);
}
