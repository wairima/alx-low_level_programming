#include "lists.h"
/**
 * pop_listint - deletes head node of a linked list
 * @head: pointer to the first element in the linked list
 * Return: the data inside the deleted element,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int rslt;

	if (head == NULL || *head == NULL)
		return (0);
	rslt = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (rslt);
}
