#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: head of a list.
 *
 * Return: head node's data.
 */
int pop_listint(listint_t **head)
{
	int new_node;
	listint_t *h;
	listint_t *now;

	if (*head == NULL)
		return (0);

	now = *head;
	new_node = now->n;
	h = now->next;
	free(now);
	*head = h;

	return (new_node);
}

