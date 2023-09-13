#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints opcodes on its own
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int bytes, b;
	char *c;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	c = (char *)main;

	for (b = 0; b < bytes; b++)
	{
		if (b == bytes - 1)
		{
			printf("%02hx\n", c[b]);
			break;
		}
		printf("%02hhx", c[b]);
	}
	return (0);
}
