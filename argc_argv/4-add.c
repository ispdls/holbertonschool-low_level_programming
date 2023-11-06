#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers.
 * @argc: command line arguments
 * @argv:An array containing the program command line arguments
 * Return: alway 0
 */
int main(int argc, char *argv[])
{
	int i, sum, sum1, total;

	for (i = 1; i < argc ; i++)
	{
		if (*argv[i] >= 'a' && *argv[i] <= 'z')
		{
			printf("Error\n");
			return (1);
		}
		sum = atoi(argv[i]);
		if  (sum >= 1)
		{
			sum1 = sum;
			total = total + sum1;
		}
		else if (sum <= 0)
		{
			printf("0\n");
			return (0);
		}
	}
	printf("%d\n", total);
	return (0);
}
