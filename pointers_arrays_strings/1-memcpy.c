#include "main.h"
/**
 *_memcpy -  copies memory area.
 *@dest: pointer to str
 *@src: constar byte
 *@n:num byte
 *Return: str
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	char *str = dest;

	while (i < n)
	{
		*str++ = *src;
		i++;
	}
	return (str);
}


