#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list safely
 * @head: pointer to the head of the list
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *curr = head, *loop_start = NULL;

	while (curr != NULL)
	{
		printf("[%p] %d\n", (void *) curr, curr->n);
		count++;
		curr = curr->next;

		if (curr == loop_start)
		{
			printf("-> [%p] %d\n", (void *) curr, curr->n);
			exit(98);
		}

		if (curr > loop_start)
			loop_start = curr;
	}

	return (count);
}

