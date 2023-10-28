#include "main.h"
/**
 **leet - encodes a string into 1337
 * @str: the string
 *Return: str
 */
char *leet(char *str)
{
	int index = 0;
	int count = 0;
	char vlet[] = "aAeEoOtTlL";
	char vnum[] = "4433007711";

	while (str[index] != '\0')
	{
		count = 0;
		while (count < 10)
		{
			if (vlet[count] == str[index])
			{
				str[index] = vnum[count];
			}
			count++;
		}
		index++;
	}
	return (str);
}
