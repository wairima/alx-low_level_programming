#include "main.h"
/**
  * _strlen - checks the length of a string pointed to by a pointer
  * @c: string to be checked
  * Return: length of string
  */
int _strlen(char *c)
{
	int string_length = 0;

	while (c[string_length])
		string_length++;
	return (string_length);
}
