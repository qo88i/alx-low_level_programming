#include "lists.h"

/**
 * sum_listint - A function that calculates the sum of
 * all the data in a listint_t list
 * @head: First node in the linked list.
 *
 * Return: resulting summation.
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
