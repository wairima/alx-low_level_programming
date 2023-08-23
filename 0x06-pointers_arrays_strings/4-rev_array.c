#include "main.h"

/**
 * reverse_array - Reverses an array.
 * @z: The array of to be reversed.
 * @d: The number of elements in the array.
 */
void reverse_array(int *z, int d)
{
	int tmp, index;

	for (index = d - 1; index >= d / 2; index--)
	{
		tmp = z[d - 1 - index];
		z[d - 1 - index] = z[index];
		z[index] = tmp;
	}
}
