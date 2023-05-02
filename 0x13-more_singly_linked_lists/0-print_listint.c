# include "lists.h"
# include <stdio.h>
/**
 * print_listint - display all elements of a listint_t list
 * @h: linked list head
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *current;
	size_t total;

	for (current = h, total = 0; current != NULL; total++,
			current = current->next)
		printf("%d\n", current->n);

	return (total);
}
