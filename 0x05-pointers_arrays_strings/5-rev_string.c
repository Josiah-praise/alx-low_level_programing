/**
  *_strlen - helper function
  *@s: character pointer;
  *Return: lenght of the string
  */
int _strlen(char *s)
{
	int size;

	for (size = 0; s[size] != '\0'; size++)
		continue;
	return (size);
}

/**
 *rev_string - helper function
 *@s: character pointer
 *Return: no return value
 */
void rev_string(char *s)
{
	int len = _strlen(s) - 1, i, j;
	char d_s;


	for (i = 0, j = len; i < len; i++, j--)
	{
		d_s = s[i];
		s[i] = s[j];
		s[j] = d_s;
	}
}
