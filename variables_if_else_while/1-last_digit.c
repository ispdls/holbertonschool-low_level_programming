#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 * Return: away
 */
int main(void)
{
int n;
int x;

srand(time(0));
n = rand() - RAND_MAX / 2;
x = n % 10;
if (x > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, x);
}
else if (x == 0)
{
printf("Last digit of %d is %d and is 0\n", n, x);
}
else if (x < 6)
{
printf("Last digit of %d is %d and is less than 6 end not 0\n", n, x);
}
return (0);
}


