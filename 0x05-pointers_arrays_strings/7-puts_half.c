#include "main.h"

/**
 *puts_half - prints every other character of a string
 *@str: address if the int that will be used as input
 *
 *Return: nothing is returned
 */
void puts_half(char *str)

{
	int i, n;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	n = (i + 1) / 2;

	for (i = n; str[i]; i++)
	{
		_putchar (str[i]);
	}

	_putchar ('\n');
}
