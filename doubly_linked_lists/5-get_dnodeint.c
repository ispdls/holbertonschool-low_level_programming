#include "lists.h"
#include <stdlib.h>
/**
 * get_dnodeint_at_index -  function that returns the nth node
 * @head: beginning of the list
 * @index: get the node
 * Return: head
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);

	for (i = 0; head != NULL && i < index; i++)
	{
		head = head->next;
	}
	return (head);
}
