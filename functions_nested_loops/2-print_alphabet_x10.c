#include "main.h"
/**
 * print_alphabet_x10 - entry point
 *
 * Return: alway 0
 */
void print_alphabet_x10(void)
{

char c;
int con = 0;

while (con < 10)
{
for (c = 'a' ; c <= 'z' ; c++)
{
_putchar(c);
}
_putchar('\n');
}
con ++;
}

