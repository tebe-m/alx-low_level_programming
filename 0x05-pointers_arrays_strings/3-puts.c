#include "main.h"

/**
*_puts - prints the string to be printed
*@str: the address to the string to be print
*
*Return: nothing is returned, the fuction is a void
*/
void _puts(char *str)
{
	int i;
	char *strng;

	strng = str;

	for (i = 0; strng[i]; i++)
	{
		_putchar(strng[i]);
	}

	_putchar('\n');
}
