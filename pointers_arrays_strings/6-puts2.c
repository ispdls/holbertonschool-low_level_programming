#include "main.h"
/**
 *puts2 - prints every other character of a string, starting with the first
 *@str: return value
 *Return: alway
 */
void puts2(char *str)
{
	int len = 0, i = 0;

	while(str[len])
		len++;

	while (i < len)
	{
		if (str[i] == '\0')
			continue;
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
