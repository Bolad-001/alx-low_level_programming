#include "lists.h"

/**
 * add_dnodeint - function that adds a new node at the beginning of a dlistint_t list
 * @head: head pointer to a pointer to the list
 * @n: a data of the node to be added
 *
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *temp;

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->prev = NULL;

	temp = *head;

	if (temp != NULL)
	{
		new_node->next = temp;
		temp->prev = new_node;
	}
	else
	{
		new_node->next = NULL;
	}
	temp = new_node;

	return new_node;
}
