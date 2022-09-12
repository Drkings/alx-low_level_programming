#include<stdio.h>
#include<ctype.h>
/**
 * main - all single numbers of base ten starting from zero
 *
 * Return: 0 (SUCCESS)
 */
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
