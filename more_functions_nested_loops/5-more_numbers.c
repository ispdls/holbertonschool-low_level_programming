#include "main.h"
/**
 *more_numbers - prints 10 times the numbers, from 0 to 14
 *Return: alway
 */
void more_numbers(void)
{
	int n1 = 0;
	int n2;

	while (n1 <= 9)
	{
		for (n2 = 0 ; n2 < 15 ; n2++)
		{
			if (n2 >= 10)
			{
				_putchar(n2 / 10 + '0');
			}
			_putchar(n2 % 10 + '0');
		}
		n1++;
		_putchar('\n');
	}
}
