#include "main.h"
/**
 **_strncpy - copey a string
 *@dest: value
 *@src: value
 *@n: value
 *Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	for (n = 0 ; src[n] != '\0' ; n++)
	{
		dest[n] = src[n];
	}
	dest[n] = '\0';
	return (dest);
}

