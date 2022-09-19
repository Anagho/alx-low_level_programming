#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: string to be printed
 */
int _strlen(char *str)
{
	int len;
	
	for (len = 0; *(str + len) != '\0' ;)
	{
		len++;
	}

	return (len);
}

void print_rev(char *s)
{
	int i, length;
	char temp;

	length = _strlen(s);

	for (i = 0; i < length / 2; i++)
	{
		temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}

	_putchar('\n');
}
