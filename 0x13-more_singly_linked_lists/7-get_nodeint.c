#include "lists.h"

/**
 * get_nodeint_at_index - returns node at a specific index in a linked list
 * @head: will be the first node
 * @index: is the node to return
 * Return: the node we're looking for, or NULL if fails
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)

{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
	temp = temp->next;
	i++;
	}
	return (temp ? temp : NULL);
}
