#include "main.h"

/**
 *_isupper - checks if char is upper case or lower case
 *
 * @c: fucton parameter
 * Return: 1 if true 0 if false
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
