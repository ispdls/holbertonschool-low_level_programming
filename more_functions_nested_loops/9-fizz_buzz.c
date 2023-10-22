#include <stdio.h>
#include "main.h"
/**
 *main - print 1 to 100.
 *Return: alway
 */
int main(void)
{
	int con;

	for (con = 0 ; con <= 100 ; con++)
	{
		if (con == 0)
		{
			printf("%d", con);
		}
		else if (con % 3 == 0 && con % 5 == 0)
		{
			printf("FizzBuzz");
			printf(" ");
		}
		else if (con % 3 == 0)
		{
			printf("Fizz");
			printf(" ");
		}
		else if (con % 5 == 0)
		{
			printf("Buzz");
			printf(" ");
		}
		else
		{
			printf("%d", con);
			printf(" ");
		}
	}
	printf("\n";
	return (0);
}
