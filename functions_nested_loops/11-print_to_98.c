#include <stdio.h>
#include "main.h"
/**
*print_to_98 - qway 98
*@n: the return value
* Return: 1.
*/
void print_to_98(int n)
{
int c;

if (n == 98)
{
printf("%d", n);
printf("\n");
}
if (n < 98)
{
for (c = n ; c <= 98 ; c++)
{
printf("%d", c);
if (c < 98)
{
printf(", ");
printf("\n");
}
}
}
if (n > 98)
{
for (c = n ; c >= 98 ; c--)
{
printf("%d", c);
if (c > 98)
{
printf(", ");
printf("\n");
}
}
printf("\n");
}
}
