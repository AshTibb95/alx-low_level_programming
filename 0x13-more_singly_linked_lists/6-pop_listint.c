#include "lists.h"

/**
 * pop_listint - linked list head node will be deleted
 * @head: points to the first element in linked list
 * Return: data inside the elements that were deleted
 * alternatively 0 if the list is empty
 */

int pop_listint(listint_t **head)

{
	listint_t *temp;
	int num;

	if (!head || !*head)
	return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
