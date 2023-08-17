#include "main.h"
/**
  * _isupper - checks for upper or lowercase characters
  * @c: The character to be checked
  * Return: 1 for uppercase characters and 0 for lowercase characters
  */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
