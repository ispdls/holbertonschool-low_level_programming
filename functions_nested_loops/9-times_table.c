#include "main.h"
/**
*times_table - print the table from 0 t0 9.
* Return: alway 0
*/
void times_table(void)
{
int n1;
int n2;
int n3;

for (n1 = 0 ; n1 <= 9 ; n1++)
{
for (n2 = 0 ; n2 <= 9 ; n2++)
{
n3 = n1 * n2;
if (n3 < 10)
{
_putchar(44);
_putchar(' ');
_putchar(' ');
_putchar(n3 + '0');
}
if (n3 > 9)
{
_putchar(n3 / 10 + '0');
_putchar(n3 % 10 + '0');
if (n2 < 9)
{
_putchar(44);
_putchar(' ');
}
}
}
_putchar('\n');
}
}


