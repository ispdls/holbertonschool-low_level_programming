#include "main.h"
/**
 *_abs - computes the absolute value of an integer.
 *@n: the number
 * Return: alway 0
 */
int _abs(int n)
{
if (n < 0)
{
int as;
as = n * -1;
return (as);
}
return (n);
}

