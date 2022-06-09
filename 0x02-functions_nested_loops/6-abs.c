#include "main.h"
/**
 * _abs - computes the absolute value of an integer.
 *
 * @num: number to be converyed
 * Return: returns the unsigned number 
 */
int _abs(int num)
{
	if (num < 0)
		num = num * -1;
	return (num);
}
