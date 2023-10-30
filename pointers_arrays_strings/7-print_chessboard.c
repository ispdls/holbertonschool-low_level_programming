#include "main.h"
/**
 * print_chessboard - prints the chessboard
 * @a: the row of the array
 * Return: nothing
 */
void print_chessboard(char (*a)[8])
{
	int vr, vc;

	for (vr = 0; vr < 8; vr++)
	{
		for (vc = 0; vc < 8; vc++)
		{
			if (vc == 7)
			{
				_putchar(a[vr][vc]);
				_putchar('\n');
			}
			else
				_putchar(a[vr][vc]);
		}
	}
}
