#include "lists.h"

/**
 * sum_listint - listint_t list will have all its data calculated
 * @head: first/head node in the linked list
 * Return: result of the sum of the calculated data
 */

int sum_listint(listint_t *head)

{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
	sum += temp->n;
	temp = temp->next;
	}
	return (sum);
}
