/**
 *_pow_recursion - math function
 *Return: returns the value of x raised to the power of y
 *        If y is lower than 0, the function should return -1
 * @x: integer
 * @y: integer
 * Description: calculates X raised to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	return (y == 1 ? x : x * _pow_recursion(x, (y - 1)));
}
