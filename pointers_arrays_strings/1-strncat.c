#include "main.h"
/**
 * *_strncat - concatenates two strings.
 * @dest:value return
 * @src: value to append
 * @n:the number to copie
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int j = 0;

	while (dest[j] != '\0')
	{
		j++;
	}
	for (n = 0 ; src[n] != '\0' ; n++)
	{
		dest[n + j] = src[n];
	}
	dest[n + j] = '\0';
	return (dest);
}

