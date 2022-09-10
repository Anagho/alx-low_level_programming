#include <stdio.h>
/**
 * main - main program
 * Description: Print all possible combinations of two digits.
 * Numbers must be separated by commas and a space.
 * Numbers must be printed in ascending order, with two digits.
 * You can only use `putchar` up to 5  times.
 * Return: 0, on success.
 */
int main(void)
{
	int i, j, k;

	i = 0;

	while (i < 100)
	{
		j = i % 10; /* get single digit or remainder */
		k = i / 10; /* get double digit or factor */

		if (j > k)
		{
			putchar(k + '0');
			putchar(j + '0');

			if (i < 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
		i++;
	}
	putchar(10); /* new line in ASCII */

	return (0);
}
