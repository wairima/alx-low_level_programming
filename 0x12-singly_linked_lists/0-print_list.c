#include "lists.h"
#include <stdio.h>

/**
 * print_list - Print elements of lists_t list
 * @v: the list_t l.
 * Return: number of nodes printedi
 */
size_t print_list(const list_t *v)
{
	size_t n = 0;

	while (v)
	{
		if (!v->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", v->len, v->str);
		v = v->next;
		n++;
	}
	return (n);
}
