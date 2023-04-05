#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t linked list
 * @head: pointer to the address of the head of the list
 *
 * Return: 0 if the linked list is empty else the head node’s data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int new;

	if (*head == NULL)
		return (0);

	else
	{
		temp = *head;
		new = (*head)->n;
		*head = (*head)->next;

		free(temp);
	}

	return (new);
}
