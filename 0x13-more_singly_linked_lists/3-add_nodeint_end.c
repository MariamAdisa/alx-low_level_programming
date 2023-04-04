#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: pointer to the head of the list
 * @n: input integer
 *
 * Return: address of the new element
 * or NULL if it fails.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{

	listint_t *new_int, *tail;

	new_int = malloc(sizeof(listint_t));

	if (new_int == NULL)
		return (NULL);

	new_int->n = n;
	new_int->next = NULL;

	if (*head == NULL)
	{
		*head = new_int;
	}

	else
	{
		tail = *head;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = new_int;
	}
	return (new_int);
}
