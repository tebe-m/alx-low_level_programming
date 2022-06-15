#include "main.h"

/**
 *swap_int - swaps the values of two integers using Dereferncing
 *
 * @a: the integer to be swopped
 * @b: the integer to be swopped
 * return: has no return
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = b;
	*b = temp;
}
