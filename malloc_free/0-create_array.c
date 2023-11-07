#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars and initializes it with a specific
 * @size: size of arry
 * @c: char
 * Return: malloc o NULL
 */
char *create_array(unsigned int size, char c)
{
	int i;
	char *ar;

	if (size == 0)
	{
		return (NULL);
	}
	ar = malloc(size * sizeof(*ar));
	if (ar == NULL)
	{return (NULL);
	}
	for (i = 0; i < size ; i++)
	{
		ar[i] = c;
	}
	return (ar);
}
