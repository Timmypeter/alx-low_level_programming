#include "main.h"

/**
 * leet- function that encodes a string into 1337
 * @s: string to encoded
 * Return: return the encoded string
 */
char *leet(char *s)
{
	int i;
	int j;
	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == a[j])
			{
				s[i] = b[j];
			}
		}
	}
	return (s);
}
