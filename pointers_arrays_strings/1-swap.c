/**
 *swap_int - swaps the values of two integers.
 *@a:return value
 *@b:return value
 *Return: a and b.
 */
void swap_int(int *a, int *b)
{
	int *temp;

	temp = a;
	a = b;
	b = temp;
}
