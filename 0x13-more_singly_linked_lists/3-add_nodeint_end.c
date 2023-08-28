#include "lists.h"

/**
 * add_nodeint_end - node at the end of a linked list
 * @head: pointer to the first element in the list
 * @n: data
 * Return: pointer to the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ll;
	listint_t *temp = *head;

	ll = malloc(sizeof(listint_t));
	if (!ll)
		return (0);

	ll->n = n;
	ll->next = 0;

	if (*head == 0)
	{
		*head = ll;
		return (ll);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = ll;

	return (ll);
}
