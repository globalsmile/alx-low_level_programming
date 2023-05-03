#include "lists.h"
/**
 * sum_listint - get the sum of all the int n of a listint_t linked list
 * @head: pointer to head
 * Return: sum of all int n
 */
int sum_listint(listint_t *head)
{
	int sum_of_ints;
	listint_t *current_node;
	
	for (sum_of_ints = 0, current_node = head; current_node != NULL;
			current_node = current_node->next)
		sum_of_ints += current_node->n;

	return (sum_of_ints);
}
