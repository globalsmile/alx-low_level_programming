#include "lists.h"

/**
 * delete_nodeint_at_index - delete the node at index of a `listint_t` list
 * @head: double header to head of linked list
 * @index: index of node to delete, starting at 0
 * Return: 1 if success, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current_node, *prev_node;
	unsigned int current_index;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		current_node = *head;
		*head = current_node->next;
		free(current_node);
		return (1);
	}

	prev_node = *head;
	current_node = (*head)->next;
	current_index = 1;

	while (current_node != NULL && current_index < index)
	{
		prev_node = current_node;
		current_node = current_node->next;
		current_index++;
	}

	if (current_node == NULL)
		return (-1);

	prev_node->next = current_node->next;
	free(current_node);

	return (1);
}
