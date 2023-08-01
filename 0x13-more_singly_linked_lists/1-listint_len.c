#include "lists.h"

/**
 * listint_len - will return number of elements in linked list
 * @h: listint_t list which will be traversed
 * Return: the number of nodes
 */

size_t listint_len(const listint_t *h)

{
	size_t num = 0;

	while (h)
	{
	num++;
	h = h->next;
	}
	return (num);
}
