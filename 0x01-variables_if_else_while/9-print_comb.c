#include <stdio.h>
/**
 * main - a program that prints all possible combinations of single-digit
 *
 * Return: 0
*/
int (void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
