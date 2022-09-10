#include <stdio.h>
/**
 * main - program.
 * Description: Print all possible combinations of two-digit numbers.
 * The two numbers should be separated by a space
 * All numbers should be printed with two digits, 00, 01.
 * You can only use `putchar` and maximum of 8 times
 * Return: (0) on success
 */
int main(void)
{
	int i, j, a, b, c, d;

	for (i = 0; i < 100; i++)
	{
		a = i / 10; /* 1st double number */
		b = i % 10; /* 1st single number */

		/* 2nd loop */
		for (j = 0; j < 100; j++)
		{
			c = j / 10; /* 2nd double number */
			d = j % 10; /* 2nd single number */

			if (a < c || (a == c && b < d))
		 	{
				putchar(a + '0');
				putchar(b + '0');
				putchar(' ');
				putchar(c + '0');
				putchar(d + '0');

				if (!(a == 9 && b == 8))
				{
					putchar(',');
					putchar(' ');
				}
			}		
		}
	}
	putchar(10);

	return (0);
}	
