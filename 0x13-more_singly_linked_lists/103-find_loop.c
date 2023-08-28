#include "lists.h"

/**
 * find_listint_loop - finding the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *onestep = head;
	listint_t *twostep = head;

	if (!head)
		return (NULL);

	while (onestep && twostep && twostep->next)
	{
		twostep = twostep->next->next;
		onestep = onestep->next;
		if (twostep == onestep)
		{
			onestep = head;
			while (onestep != twostep)
			{
				onestep = onestep->next;
				twostep = twostep->next;
			}
			return (onestep);
		}
	}

	return (NULL);
}
