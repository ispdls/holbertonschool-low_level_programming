#include <stdlib.h>
#include "dog.h"
/**
  * free_dog - frees any memory allocated by dog.
  * @d: pointer to struct
  */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
