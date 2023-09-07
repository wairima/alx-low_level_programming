#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *mem;
	int a, arr;

	if (min > max)
		return (NULL);

	arr = max - min + 1;

	mem = malloc(sizeof(int) * arr);

	if (mem == NULL)
		return (NULL);

	for (a = 0; min <= max; a++)
		mem[a] = min++;

	return (mem);
}
