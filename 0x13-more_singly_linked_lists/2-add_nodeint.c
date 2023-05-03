#include "lists.h"
/**
 * add_nodeint - add a new node at the beginning of a listint_t`list
 * @head: double pointer to head node
 * @n: int value to store in new node
 * Return: Address of new element or NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *previous_head;
	listint_t *new_node;

	previous_head = *head;
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	*head = new_node;

	if (previous_head == NULL)
		new_node->next = NULL;
	else
		new_node->next = previous_head;

return (new_node);
}
