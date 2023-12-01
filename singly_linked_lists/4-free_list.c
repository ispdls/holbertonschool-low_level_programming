#include "lists.h"
#include <stdlib.h>
/**
 * free_list - free list
 * @head: pointer to the list
 */
void free_list(list_t *head)
{
	list_t *freed;

	while (head != NULL)
	{
		freed = head;
		head = head->next;
		free(freed);
	}
}
