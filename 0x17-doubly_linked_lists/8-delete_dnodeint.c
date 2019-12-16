#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes a node
 * @head: pointer to head of DLL
 * @index: index of node that will be deleted
 * Description: 8. Delete at index
 * Return: see below
 * 1. upon success, return 1
 * 2. upon fail, return -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int iterate = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}
	/* if the node after head needs to be deleted */
	if (index == 1)
	{
		*head = current->next->next;
		free(current->next);
		current->next->prev = *head;
		return (1);
	}
	/* if last node needs to be deleted */
	if (current->next == NULL)
	{
		current->prev->next = current->next;
		free(current->next);
		return (1);
	}
	/* iterate to the node before the node to be deleted */
	while ((current != NULL) && (iterate < index - 1))
	{
		current = current->next;
		iterate++;
	}
	/* if index is more than number of nodes, then, return -1 */
	if (current == NULL || current->next == NULL)
		return (-1);
	current->next = current->next->next;
	current->prev->next = current->next;
	free(current->next);
	current->next = current;
	return (1);
}
