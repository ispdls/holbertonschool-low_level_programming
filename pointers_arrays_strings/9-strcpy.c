#include "main.h"
/**
 **_strcpy - copies the string pointed to by src
 *@dest: return value
 *@src: pointer
 *Return: alway
 */
char *_strcpy(char *dest, char *src)
{
	int len;

	while (src[len] != '\0')
	{
		dest[len] = src[len];
		len++;
	}
	dest[len++] = '\0';
	return (dest);
}