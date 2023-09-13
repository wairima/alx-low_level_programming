#include "function_pointers.h"
#include <stdio.h>
/**
  * print_name - prints the name
  * @name: name to be printed
  * @n: pointer to the function
  * Return: void
  */
void print_name(char *name, void(*n)(char *))
{
	if (name == NULL || n == NULL)
		return;
	n(name);
}
