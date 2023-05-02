#include "lists.h"
/**
 * listint_len - find the number of elements in a linked `listint_t` list
 * @h: linked list head
 * Return: number of elements in linked list
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *current;
	size_t total;

	for (current = h, total = 0; current != NULL; total++,
			current = current->next)
	;

	return (total);
}
