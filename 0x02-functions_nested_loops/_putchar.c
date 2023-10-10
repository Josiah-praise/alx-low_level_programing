#include <unistd.h>
/**
 *__putchar - display putchar
 *Description: display __putchar
 *Return: 0 (sucessful)
 */
int __putchar(void)
{
	write(1, "__putchar\n", 10);
	return (0);
}
