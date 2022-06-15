#include "main.h"
/**
 * print_rev - prints a string in reverse order
 *@s: the string to be printed
 *
 *Return: nothing is returned
 */

void print_rev(char *s)
{
	int pos = 0;

	while (s[pos] != '\0')
	{
		pos++;
	}

	for (pos = pos - 1 ; pos >= 0; pos--)
	{
		_putchar (s[pos]);
	}

	_putchar ('\n');
}