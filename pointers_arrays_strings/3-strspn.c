#include "main.h"
/**
 *_strspn - gets the length of a prefix substring
 *@s: pointer
 *@accept: the bytes
 *Return: the number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int index, j;
	int count = 0;

	for (index = 0; s[index] != '\0'; index++)
	{
		if (s[index] != 32)
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[index] == accept[j])
					count++;
			}
		}
		else
			return (count);
	}
	return (count);
}

