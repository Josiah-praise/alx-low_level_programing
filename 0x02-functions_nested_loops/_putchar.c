#include <unistd.h>
/**
 *_putchar - display putchar
 *Description: display _putchar
 *Return: 0 (sucessful)
 */
int _putchar(void)
{
	write(1, "_putchar\n", 9);
	return (0);
}
