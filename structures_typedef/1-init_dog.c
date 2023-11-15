#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - struct dog
 * @d: struct pinter
 * @name: ponter name of the dos
 * @age: pointe age of the dog
 * @owner:pointer name of the owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
