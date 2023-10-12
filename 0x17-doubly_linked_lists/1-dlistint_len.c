#include "lists.h"

/**
 * dlistint_len - get the number of elements in ll
 * @h: head of the list
 * Return: the number
 */
size_t dlistint_len(const dlistint_t *h)
{
	int n;

	n = 0;

	if (h == NULL)
		return (n);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}

	return (n);
}
