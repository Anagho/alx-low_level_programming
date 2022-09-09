#include <stdio.h>
/**
 * main - main block
 * Description: Program to print all numbers of base 10 (0 - 9)
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%i", i);
	}
	putchar('\n');

	return (0);
}
