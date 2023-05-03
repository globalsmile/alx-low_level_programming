#include "lists.h"
/**
 * pop_listint - Delete the head node of a listint_t linked list
 * @head: double pointer to head node of linked list
 * Return: head nodes data n
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	temp = *head;
	data = temp->n;
	*head = temp->next;
	free(temp);

	return (data);
}
