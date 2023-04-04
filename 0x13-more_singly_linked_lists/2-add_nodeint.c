#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: pointer to the head of the list
 * @n: input integer
 *
 * Return: address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_int = malloc(sizeof(listint_t));

	if (new_int == NULL)
		return (NULL);

	new_int->n = n;
	new_int->next = *head;

	*head = new_int;
	return (new_int);
}
