#include "main.h"

/**
 *_strcpy - copies the string pointed to by src
 *@dest: address to the char that will be used
 *@src: address to the char that will be used
 *Return: returns the value of dest
 */
char *_strcpy(char *dest, char *src)
{

	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];

	}

	dest[i] = '\0';

	return (dest);
}
