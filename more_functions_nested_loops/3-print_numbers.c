/**
 *print_numbers - print numbes 0 to 9 we new line.
 *Return: alway
 */
void print_numbers(void)
{
	int n;

	for (n = 0 ; n < 10 ; n++)
	{
		_putchar(n + '0');
	}
	_putchar('\n');
}
