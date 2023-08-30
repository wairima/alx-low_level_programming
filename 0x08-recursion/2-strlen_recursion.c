#include "main.h"

/**
 * _strlen_recursion - Returns length of a string.
 * @b: The string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *b)
{
	int len = 0;

	if (*b)
	{
		len++;
		len += _strlen_recursion(b + 1);
	}

	return (len);
}
