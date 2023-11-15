#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - function that prints a struct dog
 * @d: struct pointer
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		printf(" ");
	if (d->name == NULL)
		d->name = "nil";
	if (d->owner == NULL)
		d->owner = "nil";
	printf("%s\n", d->name);
	printf("%f\n", d->age);
	printf("%s\n", d->owner);
}
