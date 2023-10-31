#include "main.h"
/**
 *_pow_recursion - value of x raised to the power of y
 *@x: the value
 *@y: the raised to the power
 *Return: the value x
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
		else if (y <= 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
