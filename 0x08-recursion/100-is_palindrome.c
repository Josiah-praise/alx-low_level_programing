/**
  *_strlen - helper function
  *@s: character pointer;
  *Return: lenght of the string
  */
int _strlen(char *s)
{
	if (*s)
		return (1 + _strlen(s + 1));
	return (0);
}


/**
 *palindrome - helper function
 *Return: 1 if s a palindrome, 0 otherwise
 *@s: pointer to character array
 *@len: length of string - 1(the last index of the array)
 *@start: the first index
*/
int palindrome(char *s, int len, int start)
{
	if (start >= len)
		return (1);
	if (s[len] == s[start])
		return (palindrome(s, (len - 1), (start + 1)));
	else
		return (0);
}


/**
 *is_palindrome - output function
 *Return: 1 if s a palindrome, 0 otherwise
 *@s: pointer to character array
*/
int is_palindrome(char *s)
{
	return (palindrome(s, (_strlen(s) - 1), 0));
}
