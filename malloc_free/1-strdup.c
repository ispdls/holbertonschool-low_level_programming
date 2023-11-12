#include "main.h"
#include <stdlib.h>
/**
 * char *_strdup - returns a pointer to a newly allocated space in memory
 * @str: string to copy
 * Return: copy o NULL
 */
char *_strdup(char *str)
{
	char *cpy;
	int i, len;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
		len++;}
	cpy = malloc(sizeof(char) * (len + 1));
	if (cpy == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
		cpy[i] = str[i];
	}
	cpy[len] = '\0';
	return (cpy);
}
