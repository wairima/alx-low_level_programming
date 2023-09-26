#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node at a certain index in a linked list
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 * Return: 1 on Succes, or - on Fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int j = 0;
	listint_t *temp = *head;
	listint_t *present = NULL;

	if (!*head)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (j < index - 1)
	{
		if (temp == NULL || (temp->next) == NULL)
			return (-1);
		temp = temp->next;
		j++;
	}
	present = temp->next;
	temp->next = present->next;
	free(present);
	return (1);
}
