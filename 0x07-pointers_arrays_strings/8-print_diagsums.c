#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Function that prints sum of two diagonals
 *                  of a square matrix of integers.
 * @z: The matrix of integers.
 * @size: The size of the matrix.
 */
void print_diagsums(int *z, int size)
{
	int index, sum1 = 0, sum2 = 0;

	for (index = 0; index < size; index++)
	{
		sum1 += z[index];
		z += size;
	}

	z -= size;

	for (index = 0; index < size; index++)
	{
		sum2 += z[index];
		z -= size;
	}

	printf("%d, %d\n", sum1, sum2);
}
