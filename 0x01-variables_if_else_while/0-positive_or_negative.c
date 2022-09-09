#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Get a random number and print the number
 * and if it is positive, negative, or zero
 * Return: 0
 */
int main(void)
{
	int num;
	srand(time(0));
	num = rand() - RAND_MAX / 2;

	if (num > 0)
		printf("%i is positive\n", num);
	else if (num < 0)
		printf("%i is negative\n", num);
	else
		printf("%i is zero\n", num);

	return (0);
}

