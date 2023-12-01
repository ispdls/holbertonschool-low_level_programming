#include "lists.h"
#include <stdio.h>
/**
 * dlistint_len - find the length of the linked list
 * @h: pointer to the head of the list
 * Return: the len
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len;

	for (len = 0; h != NULL; len++)
		h = h->next;

	return (len);
}
