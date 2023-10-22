#include <stdio.h>
#include "main.h"
/**
 *main - print 1 to 100.
 *Return: alway
 */
int main(void)
{
	int con;

	for (con = 1 ; con <= 100 ; con++)
	{

		if (con % 3 == 0 && con % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (con % 3 == 0)
		{
			printf("Fizz");
		}
		else if (con % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", con);
		}
		if (con < 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
