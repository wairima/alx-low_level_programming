#include "main.h"

/**
 * _puts_recursion - Prints a string.
 * @x: The string to be printed.
 */
void _puts_recursion(char *x)
{
	if (*x)
	{
		_putchar(*x);
		_puts_recursion(x + 1);
	}

	else
		_putchar('\n');
}
