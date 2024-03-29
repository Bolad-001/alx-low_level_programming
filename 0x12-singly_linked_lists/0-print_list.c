#include "lists.h"

/**
 * print_list - function that prints all the element
 * @h: pointer head pointing to the fisrt node
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	unsigned int temp = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		temp++;
	}
	return (temp);
}

