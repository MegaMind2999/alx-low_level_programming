#include "lists.h"

/**
 * delete_nodeint_at_index - deleting a node in a linked list at an index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 * Return: 1 or 0
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head;
	listint_t *curr = NULL;
	unsigned int i = 1;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	while (i < index)
	{
		if (!tmp || !(tmp->next))
			return (-1);
		tmp = tmp->next;
		i++;
	}


	curr = tmp->next;
	tmp->next = curr->next;
	free(curr);

	return (1);
}
