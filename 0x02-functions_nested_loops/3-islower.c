#include "main.h"
/**
  * _islower- Checks for lowercase characters
  * @c: The chaaracter to be checked
  * Return: 1 for lowercase characters and 0 if els
  */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
