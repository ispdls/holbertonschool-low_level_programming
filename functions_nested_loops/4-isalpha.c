#include "main.h"
/**
 *_isalpha - checks for alphabetic character.
 *@c: the return value
 * Return: 1.
 */
int _isalpha(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
if (c >= 65 && c <= 90)
{
return (1);
}
return (0);
}

