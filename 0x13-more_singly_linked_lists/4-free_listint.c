#include "lists.h"

/**
 * free_listint - will free a linked list
 * @head: list to be freed - listint_t
 */

void free_listint(listint_t *head)

{
	listint_t *temp;

	while (head)
	{
	temp = head->next;
	free(head);
	head = temp;
	}
}
