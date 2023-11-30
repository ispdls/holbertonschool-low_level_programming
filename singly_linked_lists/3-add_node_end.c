#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
 * _strlen - gets len
 * @s: string
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
 * _strdup - duplicate function
 * @src: string to duplicate
 * Return: pointer to malloc
 */
void *_strdup(const char *src)
{
	int len, i;
	char *str1;

	len = _strlen(src);
	str1 = malloc((len + 1) * sizeof(char));
	if (str1 == NULL)
		return (NULL);
	for (i = 0; src[i]; i++)
		str1[i] = src[i];
	str1[i] = '\0';
	return (str1);
}
/**
 * add_node_end - add new nodes to the end of the list
 * @head: current place in the list
 * @str: add to the head
 * Return: pointer to current position in list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *stp;
	char *dupl;

	if (str == NULL)
		return (NULL);
	dupl = _strdup(str);
	if (dupl == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = dupl;
	new->len = _strlen(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	stp = *head;
	while (stp->next != NULL)
		stp = stp->next;
	stp->next = new;
	return (*head);
}
