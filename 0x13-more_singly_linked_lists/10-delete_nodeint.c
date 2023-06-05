#include "lists.h"
/**
 * delete_nodeint_at_index - eletes a node in a linked list at a certian
 * index
 * @head: pointer to the first element in list
 * @index: index of the node to delete
 *
 * Return: 1(success), -1(fail)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp
