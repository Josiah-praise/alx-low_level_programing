#include <unistd.h>
/**
 *_putchar - display putchar
 *Description: display _putchar
 *Return: 0 (sucessful)
 */
int _putchar()
{
	char string[10] = "_putchar\n";
	int len;

	len = sizeof(string)/sizeof(string[0]);
	write(1, string, len);
	return (0);
}
