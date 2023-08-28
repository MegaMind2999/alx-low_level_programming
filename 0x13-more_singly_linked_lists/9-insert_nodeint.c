#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in index
 * @head: pointer to the first node in the list
 * @idx: index
 * @n: data to insert
 * Return: pointer to the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *newnode;
	listint_t *tmp = *head;

	newnode = malloc(sizeof(listint_t));
	if (!newnode || !head)
		return (0);

	newnode->n = n;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}

	for (i = 0; tmp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			newnode->next = tmp->next;
			tmp->next = newnode;
			return (newnode);
		}
		else
		{
			newnode->next = 0;
			tmp = tmp->next;
		}
	}

	return (0);
}
