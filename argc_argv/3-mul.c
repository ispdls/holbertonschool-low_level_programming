#include <stdio.h>
#include <stdlib.h>
/**
 * main -  multiplies two numbers.
 * @argc: command line arguments
 * @argv:An array containing the program command line arguments
 * Return: alway 0
 */
int main(int argc, char *argv[])
{
	int i, mult, mult1, total;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	for (i = 1; i < argc ; i++)
	{
		mult =  atoi(argv[1]);
		mult1 = atoi(argv[2]);
		total = mult * mult1;
	}
	printf("%d\n", total);
	return (0);
}
