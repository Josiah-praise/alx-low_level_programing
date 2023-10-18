#include "main.h"
#include <stdio.h>

int main(void)
{
	char array[10] = "hello", source[5] = "wood";

	_strcat(array, source);
	
	printf("%s\n", array);
	return (0);
}
