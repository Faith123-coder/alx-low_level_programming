#include "lists.h"
/**
 * add_nodeint - adds a node at the start of a link
 * @head: pointer to the first node in the list
 * @n: data to insert in the new node
 * Return: the address of the new element, NULL if it fails
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
