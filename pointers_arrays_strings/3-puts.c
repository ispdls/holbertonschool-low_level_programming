#include "main.h"
/**
 *_puts - prints a string
 *@str: return value
 *Return: alway
 */
void _puts(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		_putchar(str[len]);
		len++;
	}
	_putchar('\n');
}
