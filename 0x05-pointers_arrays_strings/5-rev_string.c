#include "main.h"
/**
  * rev_string - reverses a string
  * @s: pointer to the string
  * Return: 0 succes
  */

void rev_string(char *s)
{
	int length, r, half;
	char temp;

	for (length = 0; s[length] != '\0'; length++)
		;
	r = 0;
	half = length / 2;

	while (half--)
	{
		temp = s[length - r - 1];
		s[length - r - 1] = s[r];
		s[r] = temp;
		r++;
	}
}
