#include "lists.h"

/*
 * list_len - function that returns number of
 * element
 * @h: head pointer
 *
 * Return: the number of elements
 */

size_t list_len(const list_t *h)
{
	unsigned int temp = 0;

	while (h != NULL)
	{
		h = h->next;
		temp++;
	}
	return (temp);
}
