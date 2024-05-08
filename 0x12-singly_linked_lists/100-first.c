#include "lists.h"
/**
 * _pprint - print before main is called
 */
void __attribute__((constructor)) _pprint(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
