#include "main.h"
/**
 *print_diagonal -  draws a diagonal line
 *@n: return value
 *Return: alway
 */
void print_diagonal(int n)
{
	int c;

	if (n >  0)
	{
		for (c = 0; c < n ; c++)
		{
			_putchar(' ');
		}
		if ( c == n)
		{
			_putchar(92);
		}
	}
	else
	{
		_putchar('\n');
	}
	_putchar('\n');
}
