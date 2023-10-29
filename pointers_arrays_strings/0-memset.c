#include "main.h"
/**
 *_memset - fills memory with a constant byte
 *@s:pointer to str
 *@b:constar byte
 *@n:bum byte
 *Return: str
 */
char *_memset(char *s, char b, unsigned int n)
{
	int index = 0;
	unsigned int i = 0;
	char *str = s;

	while(i < n)
	{
		*s++ = b;
		i++;
	}
	return (str);
}
