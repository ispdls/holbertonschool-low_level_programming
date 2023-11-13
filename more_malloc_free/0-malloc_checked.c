#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: size of the memory block to be allocated
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	void *mr;

	mr = malloc(b);
	if (mr == NULL)
		exit(98);
	return (mr);
}
