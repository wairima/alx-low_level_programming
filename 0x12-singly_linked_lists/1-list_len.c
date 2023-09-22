#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns number of elements in a linked list
 * @z: pointer to the list_t list
 *
 * Return: number of elements in z
 */
size_t list_len(const list_t *z)
{
	size_t el = 0;

	while (z)
	{
		el++;
		z = z->next;
	}
	return (el);
}
