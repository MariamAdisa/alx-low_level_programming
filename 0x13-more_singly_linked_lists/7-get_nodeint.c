#include "lists.h"

/**
 * *get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to head of the list
 * @index: index of the node
 *
 * Return: NULL if node does not exist else, the nth node of the list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int num;

	for (num = 0; num < index; num++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
