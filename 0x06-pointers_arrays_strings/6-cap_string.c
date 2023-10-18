/**
 *_islower - check for lower characters
 *Description: return 1 for lowercase and 0 for uppercase
 *Return: 1 if lowercase else 0
 *@c: a int
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}

/**
 *cap_string - utility function
 *Return: Character pointer
 *@str: Character pointer
 */
char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (_islower(str[i]))
		{
			if (str[i - 1] == '\n' || str[i - 1] == ' ' || str[i - 1] ==  '.' || str[i - 1] == '\t')
			{
				str[i] = str[i] - 32;
			}
		}
	}
	return (str);
}
