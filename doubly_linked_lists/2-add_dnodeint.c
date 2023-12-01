#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * add_dnodeint - add new node at beginning of the list
 * @head: head of the list
 * @n:value
 * Return: element added
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *add;

	if (head == NULL)
		return (NULL);
	add = malloc(sizeof(dlistint_t));

	if (add == NULL)
		return (NULL);

	add->n = n;
	add->next = *head;
	add->prev = NULL;

	if (*head != NULL)
		(*head)->prev = add;
	*head = add;
	return (add);
}
