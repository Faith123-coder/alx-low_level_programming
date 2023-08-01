#include "lists.h"
/**
 * sum_listint - calculates the sum of all the data of a listint_t linked list
 * @head: first node in the linked list
 * Return: the sum and if empty return 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
