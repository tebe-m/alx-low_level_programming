#include "main.h"

/**
 * rev_string - prints a reverse string
 *@s: adress to the int that will be changed
 *
 *Return: nohing is returned
 */
void rev_string(char *s)
{
	char *start_c, *end_c, c;
	int i, count;
	int len = 0;

	for (i = 0; s[i]; i++)
	{
		len++;
	}

	count = len;
	start_c = s;
	end_c = s;


	for (i = 0; i < count - 1; i++)
	{
		end_c++;
	}


	for (i = 0; i < count / 2; i++)
	{
		c = *end_c;
		*end_c = *start_c;
		*start_c = c;


		start_c++;
		end_c--;
	}
}
