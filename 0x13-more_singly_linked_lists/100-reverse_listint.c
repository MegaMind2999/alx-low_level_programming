#include "lists.h"

/**
 * reverse_listint - reversing a linked list
 * @head: pointer to the first node in the list
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = 0, *after;

	while (*head)
	{
		after = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = after;
	}

	*head = prev;

	return (*head);
}
