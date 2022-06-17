#include <unistd.h>

/**
 *_putchar - writes the character c to stdout
 *@c: char to be printed
 *
 *Return: returns -1 on fail and 1 on success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
