/**
 *_strlen_recursion - get string length
 *Return: string length as an integer
 *@s: pointer to array
*/
int _strlen_recursion(char *s)
{
	return (*s ? 1 + _strlen_recursion(s + 1) : 0);
}
