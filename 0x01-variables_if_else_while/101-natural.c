#include <stdio.h>

/**
 * main - lists all natuarl numbers bele 1024(excluded, multiples of 3 and 5
 *
 * Return: Always : 0
 *
 */

int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((1 % 3) == 0 || (i % 5) == 0)
			sum += i;
	}
	printf("%d\n", sum);
	return (0);
}
