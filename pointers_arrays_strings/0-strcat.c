#include "main.h"
/**
 *_strcat - t concatenates two strings.
 *@dest: value
 *@src: value
 *Return: alway
 */
char *_strcat(char *dest, char *src)
{
	int len;
	int j = _strlen(dest);

	for (len = 0 ; src[len] != '\0' ; len++)
	{
		dest[len + j] = src[len];
	}
	dest[len + j] = '\0';
	return (dest);
}
