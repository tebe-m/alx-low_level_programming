#include "main.h"

/**
 *main - generates random valid passwords for the program 
 *
 *Return: returns 0 on success 
 */
int main(void)
{
	int num;	

	srand(time(0));
	num = rand();
	printf("%d\n", num);

	return (0);
}
