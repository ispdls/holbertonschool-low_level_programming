#include "main.h"
/**
 *_strlen - the length of a string.
 *@s: return value
 *Return: alway
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
	len++;
	return (len);
	}
}
