#include "main.h"
/**
 *print_square - prints a squere.
 *@size: return value
 *Return: alway
 */
void print_square(int size)
{
	int vline;
	int hline;

	if (size >  0)
	{
		for (vline = 0; vline < size ; vline++)
		{
			for (hline = 0 ; hline < size ; hline++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

