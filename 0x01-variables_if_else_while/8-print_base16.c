#include<stdio.h>
#include<ctype.h>

/**
 * main - prints all the numbers of base sixteen in lowercase
 *
 * Return: Always 0
 */
int main(void)
{
	char base;

	for (base = '1'; base <= '9'; base++)
	{
		putchar(base);
		if (base == '9')
		{
			base = 'a';
			for (; base <= 'f';base++)
			{
				putchar(base);
			}
			break;
		}
	}
	putchar('\n');
	return (0);
}
