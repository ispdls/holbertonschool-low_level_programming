#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - function that copiesa struct dog
 * @name: name of the dog struct
 * @age: age struct
 * @owner: owner name
 * Return: struct pointer d
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int namelen, ownerlen, i;

	while (name[namelen++])
		;
	while (owner[ownerlen++])
		;
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(namelen * sizeof(dog->name));
	if (dog == NULL)
		return (NULL);
	for (i = 0 ; i < namelen ; i++)
	dog->name[i] = name[i];

	dog->age = age;

	dog->owner = malloc(ownerlen * sizeof(dog->owner));
	if (dog == NULL)
		return (NULL);
	for (i = 0 ; i < ownerlen ; i++)
		dog->owner[i] = owner[i];
	return (dog);
}
