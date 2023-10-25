int _root_recursion(int n, int root);
int _sqrt_recursion(int n);
/**
 *_root_recursion - math function
 *@n: integer
 *@root: integer to start the step from
 *Return: square root of n as an integer
 *Description: Calculates the natural square root of n
*/
int _root_recursion(int n, int root)
{
	if (root > 5000 || n < 0 || (root * root) > n)
		return (-1);
	if (n == 0)
		return (0);
	return ((root * root) == n ? root : _root_recursion(n, root + 1));
}


/**
 *_sqrt_recursion - math function
 *@n: integer
 *Return: square root of n as an integer
 *Description: Calculates the natural square root of n
 */
int _sqrt_recursion(int n)
{
	return (_root_recursion(n, 1));
}
