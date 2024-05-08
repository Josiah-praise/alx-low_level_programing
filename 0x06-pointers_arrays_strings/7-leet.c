/**
 *leet - encryption function
 *@str: character pointer
 *Return: character pointer
 **/
char *leet(char *str)
{
	char *p = str, *letters, *swap;
	int i;

	swap = "4433007711";
	letters = "aAeEoOtTlL";

	while (*str != '\0')
	{
		i = 0;
		while (*(letters + i) != '\0')
		{
			if (*(letters + i) == *str)
				*str = *(swap + i);
			i++;
		}
		str++;
	}
	return (p);
}
