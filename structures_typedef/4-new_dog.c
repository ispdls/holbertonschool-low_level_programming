#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - function that prints a struct dog
 * @name: name of the dog struct
 * @age: age struct
 * @owner: owner name
 * Return: struct pointer d
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = name;
	dog->age = age;
	dog->owner = owner;
	return (dog);
}
