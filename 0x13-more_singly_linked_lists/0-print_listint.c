#include "lists.h"

/**
 * print_listint - prints all the elements of a singly linked list.
 * @h: head of a list.
 *
 * Return: number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t new_node = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		new_node++;
	}
	return (new_node);
}
