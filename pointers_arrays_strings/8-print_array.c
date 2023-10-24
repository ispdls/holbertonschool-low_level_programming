#include <stdio.h>
#include "main.h"
/**
 *print_array - prints n elements of an array of integers
 *@a: pointer
 *@n: return value
 */
void print_array(int *a, int n)
{
	int j;

	for (j = 0 ; j < n ; j++)
	{
			printf("%d", a[j]);
			printf(", ");
			printf(" ");
		
	}
	printf("\n");
}
