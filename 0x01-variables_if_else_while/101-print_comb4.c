#include <stdio.h>
/**
 * main - program
 * Description: Print all possible different combinations of 3 digits.
 * Numbers must be separated by commas and a space.
 * The 3 digits must be different.
 * 012, 102, 021, 201, 210 are considered the same combination.
 * print only the smallest combination of 3 digit.
 * Numbers should be printed in ascending order.
 * You can only use `putchar` to print to console and just 6 times maximum.
 * Return: 0 on success
 */
int main(void)
{
	int i, j, k, l;

	for (i = 0; i < 1000; i++)
	{
		j = i / 100; /* get 1st digit - hundreds */
		k = (i / 10) % 10; /* get 2nd digit - tens, but smallest combination */
		l = i % 10; /* get the last digit - units */

		if (k > j && k < l)
		{
			putchar(j + '0');
			putchar(k + '0');
			putchar(l + '0');

			if (i < 700)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar(10);

	return (0);
}
