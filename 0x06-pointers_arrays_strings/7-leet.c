/**
 *leet - encryption function
 *@str: character pointer
 *Return: character pointer
 **/
char *leet(char *str)
{
    char *p = str;
    while (*str != '\n')
    {
        if (*str == 'a' || *str == 'A')
            *str = '4';
        else if (*str == 'e' || *str == 'E')
            *str = '3';
        else if (*str == 'o' || *str == 'O')
            *str = '0';
        else if (*str == 't' || *str == 'T')
            *str = '7';
        else if (*str == 'l' || *str == 'L')
            *str = '1';
		str++;
    }
    return (p);
}