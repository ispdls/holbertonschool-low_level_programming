#include <stdio.h>
/**
 * *cap_string - capitalizes all words of a string
 * @str: return value
 * Return: str
 */
char *cap_string(char *str)
{
	int index;
	char temp[50];

	for (index = 0 ; str[index] != '\0' ; index++)
	{
		if (str[50] >= 'a' || str[index] <= 'z')
		{
			temp[index] = str[index - 1];
			if (temp[index] == '\t' || temp[index] == '\n')
			{
				str[index] = str[index] - 32;
			}
			if (temp[index] == '{' || temp[index] == '}')
			{
				str[index] = str[index] - 32;
			}
			if (temp[index] == '(' || temp[index] == ')')
			{
				str[index] = str[index] - 32;
			}
			if (temp[index] == ',' || temp[index] == '.' || temp[index] == ';')
			{
				str[index] = str[index] - 32;
			}
			if (temp[index] == '?' || temp[index] == '!')
			{
				str[index] = str[index] - 32;
			}
			if (temp[index] == ' ' || temp[index] == '"')
			{
				str[index] = str[index] - 32;
			}
			if (index == 0)
			{
				str[index] = str[index] - 32;
			}
		}
	}
	return (str);
}
