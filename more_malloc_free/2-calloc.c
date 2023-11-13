#include "main.h"
#include <stdlib.h>
/**
* _calloc - allocates memory for an array, using malloc
*@nmemb: number of elements
*@size: size of the memory
*Return: poiter
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	mr = malloc(nmemb * size);
	if (mr != NULL)
	{
		for (i = 0; i < (nmemb * size); i++)
			mr[i] = 0;
		return (mr);
	}
	else
		return (NULL);
}
