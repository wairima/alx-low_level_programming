#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *conct;
	int i, li;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";
	i = li = 0;

	while (s1[i] != '\0')
		i++;

	while (s2[li] != '\0')
		li++;

	conct = malloc(sizeof(char) * (i + li + 1));

	if (conct == NULL)
		return (NULL);

	i = li = 0;

	while (s1[i] != '\0')
	{
		conct[i] = s1[i];
		i++;
	}
	while (s2[li] != '\0')
	{
		conct[i] = s2[li];
		i++, li++;
	}
	conct[i] = '\0';
	return (conct);
}
