#include "main.h"
/**
 *print_diagonal -  draws a diagonal line
 *@n: return value
 *Return: alway
 */
void print_diagonal(int n)
{
	int c, a;

	if (n >  0)
	{
		for (c = 0; c < n ; c++)
		{
			_putchar('\\');
			for (a = 0 ; a <= c ; a++)
			{
				if (c < n - 1)
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
	_putchar('\n');
}
