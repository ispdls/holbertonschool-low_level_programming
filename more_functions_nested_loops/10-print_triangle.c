#include "main.h"
/**
 *print_triangle - print a trangle we ##.
 *@size: retur value
 *Return: alway
 */
void print_triangle(int size)
{
	int vline;
	int hline;

	if (size > 0)
	{
		for (vline = 1 ; vline <= size ; vline++)
		{
			for (hline = 1 ; hline <= size - vline; hline++)
			{
				_putchar(' ');
			}
			for (hline = 1 ; hline <= vline ; hline++)
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
