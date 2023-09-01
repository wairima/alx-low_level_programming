#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Prints the product of two numbers
 * atoi: converts string to integer
 * @argc: The number of arguments
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
