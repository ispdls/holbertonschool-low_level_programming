#include <stdio.h>
/**
 * *cap_string - capitalizes all words of a string
 * @str: return value
 * Return: str
 */
char *cap_string(char *str)
{
	int index;

	for (index = 0 ; str[index] != '\0' ; index++)
	{
		if (str[index] == ' ' ||
				str[index] == '\t' ||
				str[index] == '\n' ||
				str[index] == '.' ||
				str[index] == ';' ||
				str[index] == '!' ||
				str[index] == '?' ||
				str[index] == '"' ||
				str[index] == '(' ||
				str[index] == ')' ||
				str[index] == '{' ||
				str[index] == '}' ||
				str[index] == 0)
		{
			if (str[index + 1] >= 'a' && str[index + 1] <= 'z')
			{
				str[index + 1] = str[index + 1] - 32;
			}
		}
	}
	return (str);
}

