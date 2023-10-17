#include <stdio.h>
/**
 * main - entry point
 *
 * print_alphabet - print_alphabet
 *
 * Return: alway 0
 */
void print_alphabet(void);
{
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
putchar(ch);
}
return;
}

int main(void)
{
print_alphabet();
return (0);
}

