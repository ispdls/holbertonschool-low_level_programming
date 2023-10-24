#include "main.h"
/**
 *print_rev - prints a string in reverse.
 *@s: return value
 *Return: alway
 */
void print_rev(char *s);
{
	int len = 0;
	int n;

	while (str[len] != '\0')
	{
		len++;
	}
	for (n = len - 1 ; n >= 0 ; n--;)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}

