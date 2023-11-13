#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a2 dimensional array of integers.
 *@width: width oàf array
 *@height: height of array
 *Return: pointer to lis
 */
int **alloc_grid(int width, int height)
{
	int **lis;
	int i, j;

	if (width == 0 || height == 0)
		return (NULL);
	lis = (int **) malloc(sizeof(int *) * height);
	if (lis != NULL)
	{
		for (i = 0 ; i < height ; i++)
		{
			lis[i] = (int *) malloc(sizeof(int) * width);
			if (lis[i] != NULL)
			{
				for (j = 0 ; j < width ; j++)
					lis[i][j] = 0;
			}
			else
			{
				while (i >= 0)
				{
					free(lis[i]);
					i--;
				}
				free(lis);
				return (NULL);
			}
		}
		return (lis);
	}
	else
	{
		return (NULL);
	}
}
