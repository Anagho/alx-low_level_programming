#include "main.h"

/**
 * _strlen - Return the number of f bytes that a string has
 * @s: The string
 *
 * Return: The length of the string as an Integer
 */
int _strlen(char *s)
{
	int len = 0;

	for (; *(s + len) != '\0' ;)
	{
		len++;
	}

	return (len);
}
