#include "lists.h"

/**
 * add_nodeint_end - the end of a linked list a node will be added
 * @head: point for the first element in list
 * @n: data to be implemented in new element
 * Return: pointer to new node, NULL on failure
 */

listint_t *add_nodeint_end(listint_t **head, const int n)

{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
	return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
	*head = new;
	return (new);
	}

	while (temp->next)
	temp = temp->next;

	temp->next = new;

	return (new);
}
