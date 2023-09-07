#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array of a certain number
 *           of elements and returns pointer to the allocated memory.
 * @nmemb: The number of elements.
 * @size: The byte size of each element of the array.
 *
 * Return: NULL If nmemb = 0, size = 0, or the function fails.
 *       else - a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	char *c;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	c = ptr;

	for (i = 0; i < (size * nmemb); i++)
		c[i] = '\0';

	return (ptr);
}
