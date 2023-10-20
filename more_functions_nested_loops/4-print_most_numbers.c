#include "main.h"
/**
 *print_most_numbers - print number from 0 to 9 do not print 2 4.
 *Return: alway
 */
void print_most_numbers(void)
{
	int n;

	for (n = 0 ; n < 10 ; n++)
	{
		if (n == 2 || n == 4)
		{
			continue;

		}
		_putchar(n + '0');

	}
	_putchar('\n');
}
