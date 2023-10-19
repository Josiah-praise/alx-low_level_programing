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
	char *sep, *temp = str;

	sep = ",;.!?\"(){}\n\t ";

	for (; *str != '\0'; str++)
	{
		for (i = 0; sep[i] != '\0'; i++)
		{
			if (_islower(*str))
			{
				if (*(str - 1) == sep[i])
				{
					*str = *str - 32;
				}
			}
		}
	}
	return (temp);
}
