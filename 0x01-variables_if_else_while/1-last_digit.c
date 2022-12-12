#include <stdlib.h>
#include <time.>
#include <stdio.h>
/**
 * main -print last digit of a number stored in variable`
 *
 * Return: 0
*/
int main(void)
{
	int n;
	int p;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	p = n % 10;
	printf("last digit of %d is %d" n, p);
	if (p > 5)
		printf("and is greater than 5\n");
	if (p == 0)
		printf("and is 0\n");
	if (p < 6 && p != 0)
		printf("and is less than 6 and not 0\n");
	return (0);
}
