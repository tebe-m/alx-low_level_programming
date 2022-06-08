#include "main.h"

/**
 *print_alphabetx10 - prints 10 times the alphabet, in lowercase
 *
 *Return: no return type
 */
void print_alphabet(void)
{
	int i = 10;
	char alphabet = 'a'

	while (i > 0)
	{
		while (alphabet <= 'z')
		{
			_putchar (alphabet);
			alphabet++;
		}
	_putchar ('\n');
	i--;
	}
}
