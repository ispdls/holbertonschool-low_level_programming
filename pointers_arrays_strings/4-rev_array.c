#include "main.h"
/**
 *reverse_array - reverse the content of an array of integers
 *@a: array
 *@n: size of array
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0 ; i < n-- ; i++)
	{
		temp = a[n];
		a[n] = a[i];
		a[i] = temp;
	}
}
