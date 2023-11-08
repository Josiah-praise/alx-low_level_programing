#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

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
 * op_mod - calculte the remainder of a divided by b
 * @a: integer
 * @b: integer
 * Return: remainder of a / b
 */
int op_mod(int a, int b)
{
	return (a % b);
}

/**
 * op_sub - find differnce between a and b
 * @a: integer
 * @b: integer
 * Return: difference between a and b
 */
int op_sub(int a, int b)
{
	return ((a > b) ? a - b : b - a);
}

/**
 * op_div - divide a by b
 * @a: integer
 * @b: integer
 * Return: a / b as as an integer
 */
int op_div(int a, int b)
{
	return (a / b);
}
