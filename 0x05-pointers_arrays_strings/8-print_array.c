#include <stdio.h>
/**
  * print_array - prints elements of an array on integers
  * @b: the input array
  * @n: size of the array
  */
void print_array(int *b, int n)
{
	int index_of_array;

	for (index_of_array = 0; index_of_array < n; index_of_array++)
	{
		printf("%d", b[index_of_array]);
		if (index_of_array != (n - 1))
		{
			printf(", ");
		}
	}
	putchar('\n');
}
