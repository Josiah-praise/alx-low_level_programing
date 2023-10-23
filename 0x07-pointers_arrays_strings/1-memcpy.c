/**
 * _memcpy - copy a block of memory to another block
 * @dest: destination array
 * @src: source array
 * @n: unsigned int
 * Return: pointer to destination array
*/
char *_memcpy(char *dest, char *src, unsigned  int n)
{
	int i = 0;
	char *temp = src;

	while (i < (int)n)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	return (temp);
}
