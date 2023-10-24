#include "main.h"
/**
 *rev_string - function the reverse a string.
 *@s: return value
 *Return: alway
 */
void rev_string(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	int firstl = 0;
	int lastl = len - 1;

	while (firstl < lastl)
	{
		char temp = s[firstl];

		s[firstl] = s[lastl];
		s[lastl] = temp;
	}
}
