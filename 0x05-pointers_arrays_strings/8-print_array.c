#include "main.h"

/**
 *print_array - prints n elements of an array of integers
 *@a: address to an int that will be used as input
 *@n: array length
 *Return: void which
 */
void print_array(int *a, int n)

{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar("%d", a[i]);

		if (i < n - 1)
		{
			_putchar(", ");
		}
	}

	_putchar("\n");
}
