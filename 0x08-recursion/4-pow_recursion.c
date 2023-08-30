#include "main.h"

/**
 * _pow_recursion - Returne value of x raised to the power of y.
 * @e: The number to be raised.
 * @y: The power.
 *
 * Return: The value of x raised to the power of y.
 */
int _pow_recursion(int e, int y)
{
	int result = e;

	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	result *= _pow_recursion(e, y - 1);

	return (result);
}
