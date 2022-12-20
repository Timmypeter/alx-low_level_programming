#include "main.h"

/**
 * _strlen - return the length of the string
 * @s: char type
 * Return: 0
 */
int _strlen(char *s)
{
	int c;

	for (c = 0; s[c] != '\0'; c++)
		;

	return (c);
}
