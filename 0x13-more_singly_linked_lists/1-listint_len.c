#include "lists.h"
/**
  * listint_len - returns number of elements in a linked list
  * @h: listint_t linked list to traverse
  * Return: number of nodes
  */
size_t listint_len(const listint_t *h)
{
	size_t total = 0;

	while (h)
	{
		total++;
		h = h->next;
	}
	return (total);
}
