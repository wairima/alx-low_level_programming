#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly-allocated space in memory
 *           containing a copy of the string given as parameter.
 * @str: The string to be copied.
 *
 * Return: If str == NULL or insufficient memory is available - NULL.
 *         Otherwise - a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	char *c;
	int q, ln = 0;

	if (str == NULL)
		return (NULL);

	for (q = 0; str[q]; q++)
		ln++;

	c = malloc(sizeof(char) * (ln + 1));

	if (c == NULL)
		return (NULL);

	for (q = 0; str[q]; q++)
		c[q] = str[q];

	c[ln] = '\0';

	return (c);
}
