#include "main.h"
/**
 *print_last_digit - print the last number
 *@n: the number
 * Return: alway 0
 */
int print_last_digit(int n)
{
int lastnum;

lastnum = n % 10;
return (lastnum);
if (lastnum < 0)
{
lastnum = lastnum * -1;
}
_putchar(lastnum + '0');
return (lastnum);
}

