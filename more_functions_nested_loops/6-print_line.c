#include "main.h"
/**
 *print_line - draws a straight line.
 *@n: return '_'
 *Return: alway
 */
void print_line(int n)
{
	int c;

	for (c = 0 ; c <= n; c++)
	{
		if (n == 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('_');
		}
	}
}
