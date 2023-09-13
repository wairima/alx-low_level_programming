#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Returns sum of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Returns difference of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Returns product of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Returns division of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: division of a and b.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Returns mod of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: mod of a and b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
