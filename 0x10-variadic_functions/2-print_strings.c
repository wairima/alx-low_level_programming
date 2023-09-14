#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
  * print_strings - prints strings
  * @separator: separates between string values
  * @n: number of arguments
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int index;
	char *strng;

	va_list list;

	va_start(list, n);

	for (index =  0; index < n; index++)
	{
		strng = va_arg(list, char *);
		if (!strng)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", strng);
		}
		if (index != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(list);
}
