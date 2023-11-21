#include "lists.h"

/**
 * free_listint2 - Free a listint_t list.
 * @head: A pointer to the address of the head of the listint_t list.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
