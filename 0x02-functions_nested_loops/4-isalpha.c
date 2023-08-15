#include "main.h"
/**
  * _isalpha - Checks for alphabetic characters
  * @c: The character being checked
  * Return: 1 for any alphabetic character and 0 for anything else
  */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
