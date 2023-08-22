#include "main.h"
/**
  * puts2 - prints xters of a string
  * @str: the referenced string
  * Return: 0
  */
void puts2(char *str)
{
	int x = 0;

	while (str[x] != '\0')
	{
		if (x % 2 == 0)
		{
			_putchar(str[x]);
		}
		x++;
	}
	_putchar('\n');
}
