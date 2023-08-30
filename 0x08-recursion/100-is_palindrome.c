#include "main.h"

int find_strlen(char *c);
int check_palindrome(char *c, int len, int index);
int is_palindrome(char *c);

/**
 * find_strlen - Returns length of a string.
 * @c: The string to be measured.
 *
 * Return: The length of the string.
 */
int find_strlen(char *c)
{
	int len = 0;

	if (*(c + len))
	{
		len++;
		len += find_strlen(c + len);
	}

	return (len);
}

/**
 * check_palindrome - Checks whether a string is a palindrome.
 * @c: The string to be checked.
 * @len: The length of c.
 * @index: The index of the string to be checked.
 *
 * Return: If the string is a palindrome - 1.
 *         If the string is not a palindrome - 0.
 */
int check_palindrome(char *c, int len, int index)
{
	if (c[index] == c[len / 2])
		return (1);

	if (c[index] == c[len - index - 1])
		return (check_palindrome(c, len, index + 1));

	return (0);
}

/**
 * is_palindrome - Checks whether a string is a palindrome.
 * @c: The string to be checked.
 *
 * Return: If the string is a palindrome - 1.
 *         If the string is not a palindrome - 0.
 */
int is_palindrome(char *c)
{
	int index = 0;
	int len = find_strlen(c);

	if (!(*c))
		return (1);

	return (check_palindrome(c, len, index));
}
