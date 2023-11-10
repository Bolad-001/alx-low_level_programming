#include "lists.h"

/**
 * dlistint_len - function that return the number of a list
 * @h: head pointer
 *
 * Return: the number of an element
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		h = h->next;
		node_count++;
	}

	return (node_count);
}
