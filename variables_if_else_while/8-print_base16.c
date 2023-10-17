
#include <stdio.h>
/**
 * main - entry point
 * Return: away
 */
int main(void)
{
int num;
char c;

for (num = 0 ; num < 10 ; num++)
{
putchar(num + '0');
}
for (c = 'a' ; c <= 'f' ; c++)
{
putchar (c);
}
putchar('\n');
return (0);
}

