#include "main.h"
/**
 *Prim_recurs - look for prime number
 *is_prime_number - return one if the number is pri
 *@num: value
 *@divi: division
 *@n: value to check
 *Return: 1 for true 0 for false
 */

int Prim_recurs(int num, int divi)
{
	if (num <= 1)
	{
		return (0);
	}

	if (divi == 1)
	{
		return (1);
	}

	if (num % divi == 0)
	{
		return (0);
	}

	return (Prim_recurs(num, divi - 1));
}
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (Prim_recurs(n, n - 1));
}
