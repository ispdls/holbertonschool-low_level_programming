#include "main.h"
/**
 *_strcat - t concatenates two strings.
 *@dest: value
 *@src: value
 *Return: alway
 */
char *_strcat(char *dest, char *src)
{
	int len = 0;
	int j = 0;

	while (dest[j] != '\0')
	{
		j++;
	}

	for (len = 0 ; src[len] != '\0' ; len++)
	{
		dest[j] = src[len];
	}
	dest[j] = '\0';
	return (dest);
}
