#include "main.h"
/**
 * _memset - fill a block of memory with a specific value
 * @a: starting address of memory to be filled
 * @b: the desired value
 * @n: number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *a, char d, unsigned int n)
{
	int e = 0;

	for (; n > 0; e++)
	{
		a[e] = d;
		n--;
	}
	return (a);
}
