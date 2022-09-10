#include <stdio.h>
/**
 * main - program
 * Description: Print all possible combinations of single-digit numbers
 * each followed by a comma and a space, except the last number
 * Return: 0 on success
 */
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar(n + '0');
		if (n < 9)
		{
			putchar(44);
			putchar(32);
		}
		n++;
	}
	putchar(10);

	return (0);
}
