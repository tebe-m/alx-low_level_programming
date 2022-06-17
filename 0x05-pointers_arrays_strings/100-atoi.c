#include "main.h"

/**
 * is_numerical - checks if input is numeric.
 * @n: numeric input
 * Return: if n is a number, return 1 else return 0
 */
int is_numerical(unsigned int n)
{
	return (n >= '0' &&  n <= '9');
}

/**
 * _atoi - convert a string to an integer.
 *@s: test string
 * Return: singed num
 */
int _atoi(char *s)
{
	unsigned int i, num;
	int sign;

	sign = 1;
	num = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (is_numerical(s[i]))
		{
			num = (s[i] - 48) + num * 10;

			if (s[i + 1] == ' ')
			{
				break;
			}
		}
		else if (s[i] == '-')
		{
			sign = sign * -1;
		}
	}

	return (num * sign);
}
