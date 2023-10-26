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
	int j = 0;

	while (dest[j] != '\0')
	{
	j++;
	}

	for (n = 0 ; src[n] != '\0' ; n++)
	{
	dest[j] = src[n];
	}
	dest[j] = '\0';
	return (dest);
}

