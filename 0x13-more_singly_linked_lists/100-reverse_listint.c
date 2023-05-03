#include "lists.h"
#include <stdio.h>
/**
 * reverse_listint - Reverse a listint_t linked list
 * @head: double pointer to head
 * Description: Limited to going through loop only once.
 * Not allowed to use malloc or free or arrays
 * Can only declare a max of 2 variables.
 * Return: pointer to first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node = NULL, *current_node = *head, *next_node;

	while (current_node != NULL)
	{
		next_node = current_node->next;
		current_node->next = prev_node;
		prev_node = current_node;
		current_node = next_node;
	}

	*head = prev_node;

	return (*head);
}
