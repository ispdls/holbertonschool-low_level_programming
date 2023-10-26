#include "main.h"
/*string_touppe - changes all lowercase letters of a string to uppercase
 *@str: value
 *Return: str
 */
char *string_toupper(char *str)
{
	int index;

	for (index = 0 ; str[index] != '\0' ; index++)
	{
		if (str[index] >= 'a' && str[index] <= 'z')
		{
			str[index] = str[index] - 32;
		}
	}
}
