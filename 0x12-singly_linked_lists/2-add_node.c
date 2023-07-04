#include "lists.h"

/**
 * add_node - function that adds a new node
 * @str: string to be duplicated
 * @head: pointer to the first node
 *
 * Return: the address pf the new node
 */

list_t *add_node(list_t **head, const char *str)
{
	unsigned int n;
	list_t *new_node;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}


	new_node->str = strdup(str);

	while (str[n])
		n++;

	new_node->len = n;
	new_node->next = *head;

	*head = new_node;


	return (new_node);
}
