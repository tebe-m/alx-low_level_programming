#include "main.h"

/**
*_puts - prints a string
*@str: pointer to the string to be printed
*
*Return: nothing is returned
*/
void _puts(char *str)
{
	char *c;
	int pos;

	c = str;

	for (pos = 0; c[pos]; pos++)
    {
		_putchar (c[pos]);
	}
    _putchar('\n');
}