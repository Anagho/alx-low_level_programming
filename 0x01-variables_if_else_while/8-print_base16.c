#include <stdio.h>
/**
 * main - main program
 * Description: Program to print all hexa-decimal numbers in lowercase
 * Using `putchar`not more than 3 times
 * Return: 0
 */
int main(void)
{
	char c;
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	for (c = 'a'; c < 'g'; c++)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
