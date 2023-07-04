#include "lists.h"

/**
 * add_node_end - function that add a new node
 * @str: string to check
 * @head: pointer to the first node
 *
 * Return: the address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int n = 0;
	list_t	*new_node;
	list_t *temp;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);

	while (str[n])
	{
		n++;
	}
	new_node->len = n;
	temp = *head;
	new_node->next = NULL;

	if (temp == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (temp->next != NULL)
		{
                	temp = temp->next;
		}
		temp->next = new_node;
	
	}

	return (new_node);
}
