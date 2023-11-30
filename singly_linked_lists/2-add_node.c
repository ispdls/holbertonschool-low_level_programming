#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - length of the string
 * @s: pointer string
 * Return: len
 */
int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		;
	return (i);
}
/**
 * add_node - add new nodes to the list
 * @head: current place in the list
 * @str: string to add to the head
 * Return: pointer to current position in list
 */
list_t *add_node(list_t **head, const char *str)
{
	int i, len;
	char *str1;
	list_t *list1;

	if (str == NULL || head == NULL)
		return (NULL);
	len = _strlen(str);
	list1 = *head;
	str1 = malloc((len + 1) * sizeof(char));
	if (str1 == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		str1[i] = str[i];
	list1 = malloc(sizeof(list_t));
	if (list1 == NULL)
	{
		free(str1);
		return (NULL);
	}
	list1->str = str1;
	list1->len = len;
	list1->next = *head;
	*head = list1;
	return (list1);
}
