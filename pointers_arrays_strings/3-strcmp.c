#include "main.h"
/**
 *_strcmp - compares two string
 *@si: value to compare
 *@s2: value to compare
 *Return: the value compare of s1 and s2
 */
int _strcmp(char *s1, char *s2)
{
	int index;

	for (index = 0 ; s1[index] != '\0' && s2[index] != '\0' ; index++)
	{
		if (s1[index] != s2[index])
			return (s1[index] - s2[index]);
	}
}
