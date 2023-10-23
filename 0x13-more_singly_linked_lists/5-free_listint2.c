#include "lists.h"

/**
 * free_listint2 - Frees a listint_t linked list and sets head to NULL.
 * @head: Pointer to pointer to first node of linked list.
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *current, *next;

	if (head == NULL)
		return;

	current = *head;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}

	*head = NULL;
}

