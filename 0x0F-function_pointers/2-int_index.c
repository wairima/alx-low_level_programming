#include "function_pointers.h"
/**
  * int_index - searches for an integer in an array of integers.
  * @array: The array to be searched
  * @size: size of the integer
  * @cmp: a pointer to the function to be used to compare values
  * Return: 0
  */
int int_index(int *array, int size, int(*cmp)(int))
{
	int target;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (target = 0; target < size; target++)
	{
		if (cmp(array[target]))
			return (target);
	}
	return (-1);
}
