#include "lists.h"
/**
 * get_nodeint_at_index - Get the nth node of a listint_t linked list
 * @head: pointer to head node
 * @index: index to find in linked list, starting at 0
 * Return: pointer to node or NULL if failed
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current_node;
	unsigned int total;

	current_node = head;
	total = 0;
	while (total < index)
	{
		if (current_node)
			current_node = current_node->next;
		else
			return (NULL);
		total++;
	}

	if (current_node)
		return (current_node);
	else
		return (NULL);
}
