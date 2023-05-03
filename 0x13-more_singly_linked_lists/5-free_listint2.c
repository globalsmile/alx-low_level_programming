#include "lists.h"
/**
 * free_listint2 - free a listint_t list
 * @head: double pointer to head
 */
void free_listint2(listint_t **head)
{
	listint_t *current_node, *next_node;

	if (head == NULL)
		return;

	current_node = *head;
	while (current_node != NULL)
	{
		next_node = current_node->next;
		free(current_node);
		current_node = next_node;
	}
	*head = NULL;
}
