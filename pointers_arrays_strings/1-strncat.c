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
	int len = 0;

	while (dest[j] != '\0')
	{
		j++;
	}
	for (len = 0 ; len < n && src[len] != '\0' ; len++)
	{
		dest[j] = src[len];
	}
	dest[j] = '\0';
	return (dest);
}

