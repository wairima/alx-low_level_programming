#include "main.h"
/**
  * _isdigit - checks for characters or digits
  * @c: The character being checked
  * Return: 0 for characters and 1 for digits
  */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
