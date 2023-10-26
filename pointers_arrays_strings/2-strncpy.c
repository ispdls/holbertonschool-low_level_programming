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
	while (dest[n] != '\0')
	{
		src[n] = dest[n];
		n++;
	}
	src[n] = '\0';
	return (src);
}

