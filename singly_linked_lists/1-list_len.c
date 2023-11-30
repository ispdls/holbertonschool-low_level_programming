#include <stdio.h>
#include "lists.h"
/**
 * list_len - unction that returns the number of elements in a linked list_t list
 * @h: linked list to print
 * Return: number of nodes in the list
 */
size_t list_len(const list_t *h)
{
	int i;

	for (i = 0; h; i++)
		h = h->next;
	return (i);
}
