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
	int j;

	for (j = 0 ; j < n && src[j] != '\0' ; j++)
	{
		dest[j] = src[j];
	}
	while(j < n)
	{
	dest[j] = '\0';
	j++;
	}
	return (dest);
}

