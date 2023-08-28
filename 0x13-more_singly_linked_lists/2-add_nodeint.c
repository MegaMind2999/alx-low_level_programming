#include "lists.h"

/**
 * add_nodeint - node at the beginning of a linked list
 * @head: pointer to the first node in the list
 * @n: data
 * Return: pointer to the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ll;

	ll = malloc(sizeof(listint_t));
	if (!ll)
		return (NULL);

	ll->n = n;
	ll->next = *head;
	*head = ll;

	return (ll);
}
