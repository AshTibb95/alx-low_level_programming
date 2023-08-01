#include "lists.h"

/**
 * add_nodeint - the beginning of a linked list a new node to be added
 * @head: will point to first node in the list
 * @n: data that will be inserted in new node
 * Return: point to new node, otherwise NULL on failure
 */

listint_t *add_nodeint(listint_t **head, const int n)

{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
	return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
