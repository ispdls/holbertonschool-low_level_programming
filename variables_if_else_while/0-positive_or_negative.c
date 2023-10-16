#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * mai - emtry point
 * return 0
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0);
{
	printf("is positive");
}
if (n == 0);
{
	printf("is zero");
}
if (n < 0);
{
	printf("is negative");
}
return (0);
}
