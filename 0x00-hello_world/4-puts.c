#include <stdio.h>
#include <string.h>

/**
 *main - outs a string using Puts()
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	char str[55];

	strcpy(str,"Programming is like building a multilingual puzzle");

	puts(str);

	return (0);
}
