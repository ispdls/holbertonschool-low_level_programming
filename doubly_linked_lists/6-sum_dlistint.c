#include "lists.h"
#include <stdlib.h>
/**
 * sum_dlistint - the sum of all the data 
 * @head: the beginning of the list
 * Return: sum of elements
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	for (sum = 0; head != NULL; head = head->next)
		sum = sum + head->n;
	return (sum);
}
