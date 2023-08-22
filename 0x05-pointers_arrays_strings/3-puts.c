#include "main.h"
/**
  * _puts - function that  prints a string, followed by a new line, to stdout
  * @str: pointer to the string
  * Return: string followed by new line
  */
void _puts(char *str)
{
	int s = 0;

	while (str[s])
	{
		_putchar(str[s]);
		s++;
	}
	_putchar('\n');
}
