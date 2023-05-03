#include "lists.h"
#include <stdio.h>
/**
 * find_listint_loop - find the loop in a linked list
 * @head: head of linked list
 * Description: Not allowed to use malloc, free or arrays.
 * Can only declare a max of 2 variables.
 * Return: Address of node where loop starts, or NULL if no loop found.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow, *fast;

	if (head == NULL)
		return (NULL);

	slow = fast = head;
	do {
		if (slow->next)
			slow = slow->next;
		else
			return (NULL);

		if (fast->next && fast->next->next)
			fast = fast->next->next;
		else
			return (NULL);
	} while (fast != slow);

	slow = head;
	while (fast != slow)
	{
		fast = fast->next;
		slow = slow->next;
	}

	return (slow);
}
