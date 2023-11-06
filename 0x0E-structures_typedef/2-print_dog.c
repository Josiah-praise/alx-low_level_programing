#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - prints a dog struct
 * @d: a pointer to a dog struct
 * Return: no return value
 */
void print_dog(struct dog *d)
{
	(d->name == NULL) ? printf("Name: (nil)\n") : printf("Name: d->name\n");
	(d->age == NULL) ? printf("Age: nil\n") : printf("Age: d->age\n");

}
