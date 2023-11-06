#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize a variable of type struct dog
 * @d: a pointer to a struct dog
 * @name: a pointer to a string
 * @age: age as a floating point number
 * @owner: pointer to a string
 * Return: No return Value
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
