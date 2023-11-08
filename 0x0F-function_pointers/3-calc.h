#ifndef _CALC
#define _CALC

#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

int op_add(int a, int b);

int op_sub(int a, int b);

int op_mul(int a, int b);

int op_div(int a, int b);

int op_mod(int a, int b);

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

int (*get_op_function(char *s))(int, int);

#endif /*_CALC*/
