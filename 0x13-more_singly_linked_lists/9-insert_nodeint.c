#include "lists.h"

/**
 * insert_nodeint_at_index - insert node at index of a linked list
 * @head: pointer to the address of the head of the list
 * @idx:  index of the list where the new node should be added.
 * @n: integer
 *
 * Return: NULL if unsuccessful
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *dupl;
	unsigned int i;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = new;
		new->n = n;
		new->next = NULL;
		return (new);
	}

	if (idx == 0)
	{
		new->next = *head;
		new->n = n;
		*head = new;
		return (new);
	}

	dupl = *head;
	for (i = 1; i < idx; i++)
	{
		dupl = dupl->next;
	}

	new->n = n;
	new->next = dupl->next;
	dupl->next = new;
	return (new);
}
