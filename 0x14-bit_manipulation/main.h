#ifndef _MAIN
#define _MAIN

#include <stdlib.h>

#define BITS ((sizeof(unsigned long int) * (8)) - (1))

void print_binary(unsigned long int n);

int _putchar(int);

unsigned int binary_to_uint(const char *b);

int set_bit(unsigned long int *n, unsigned int index);

#endif /*_MAIN*/
