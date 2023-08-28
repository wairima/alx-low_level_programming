#include "main.h"
/**
 * _memcpy - function that copies @n bytes from memory area @src
 * to memory area @dest
 * @n: function copied
 * @src: bytes from memory area
 * @dest: to memory area
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int s = 0;

	while (s < n)
	{
		dest[s] = src[s];
		s++;
	}
	return (dest);
}
