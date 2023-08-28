#include "lists.h"

/**
 * pop_listint - deleting the head node of a linked list
 * @head: first element in the linked list
 * Return: data deleted
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (!head || !*head)
		return (0);

	n = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (n);
}
