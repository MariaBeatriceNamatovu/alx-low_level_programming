#include "lists.h"

/**
 * free_dlistint - funcion to free alocated memory on heap
 *
 *
 *
 *
 * @head: pointer to head of doubly linked list
 *
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
