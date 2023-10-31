#include "main.h"
/**
 *_sqrt_recursion - returns the natural square root of a number.
 *sqrt_cal - number from n to the base
 *@n: the value
 *@base: base number
 *Return: the square of n
 */
int sqrt_cal(int n, int base)
{
	if (base * base == n)
	{
		return (base);
	}
	if (base * base > n)
	{
		return (-1);
	}
	return (sqrt_cal(n, base + 1));
}
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	return (sqrt_cal(n, 2));
}
