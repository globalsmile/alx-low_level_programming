#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - Print a `listint_t` linked list including mem addresses
 * @head: head of linked list
 * Description: Go through the list only once.
 * Return: number of nodes in list. If fails, exit with status 98.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *curr;
	size_t count;
	const listint_t *prev;

	curr = head;
	if (curr == NULL)
		exit(98);

	count = 0;
	while (curr != NULL)
	{
		prev = curr;
		curr = curr->next;
		count++;
		printf("[%p] %d\n", (void *)prev, prev->n);

		if (prev < curr)
		{
			printf("-> [%p] %d\n", (void *)curr, curr->n);
			break;
		}
	}

	return (count);
}
