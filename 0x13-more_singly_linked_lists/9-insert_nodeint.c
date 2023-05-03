#include "lists.h"
#include <stdio.h>
/**
 * insert_nodeint_at_index - insert a new node at a given position
 * @head: double pointer to head
 * @index: insert node at this index, starting count at 0
 * @n: value to store in node
 * Return: Address of new node or NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	listint_t *new_node;
	listint_t *current_node;
	unsigned int total;

	if (head == NULL)
		return (NULL);

	current_node = *head;
	for (total = 1; current_node && total < index; total++)
	{
		current_node = current_node->next;
		if (current_node == NULL)
			return (NULL);
	}

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;

	if (index == 0)
	{
		*head = new_node;
		new_node->next = current_node;
	}
	else if (current_node->next)
	{
		new_node->next = current_node->next;
		current_node->next = new_node;
	}
	else
	{
		new_node->next = NULL;
		current_node->next = new_node;
	}
	return (new_node);
}
