#include "lists.h"
/**
 * print_listint_safe - printing a linked list with a loop
 * @head: pointer to the first node of the linked list
 * Return: size
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tempnode = NULL;
	const listint_t *linkedlist = NULL;
	size_t counter = 0;
	size_t newnode;

	tempnode = head;
	while (tempnode)
	{
		printf("[%p] %d\n", (void *)tempnode, tempnode->n);
		counter++;
		tempnode = tempnode->next;
		linkedlist = head;
		newnode = 0;
		while (newnode < counter)
		{
			if (tempnode == linkedlist)
			{
				printf("-> [%p] %d\n", (void *)tempnode, tempnode->n);
				return (counter);
			}
			linkedlist = linkedlist->next;
			newnode++;
		}
		if (!head)
			exit(98);
	}
	return (counter);
}
