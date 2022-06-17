#include "main.h"

/**
 *main - generates random valid passwords for the program 
 *
 *Return: returns 0 on success 
 */
int main(void)
{
	int num;	
	time_t t;

	num = 0;
	srand((unsigned int) time(&t));
	
	num = rand() % 128;
	printf("%d\n", num);

	return (0);
}
