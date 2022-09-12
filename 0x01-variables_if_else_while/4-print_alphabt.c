#include<stdio.h>
#include<ctype.h>

/**
 * main - print all alphabets except q and e
 *
 * Return: 0 (SUCESS)
 */
int main(void)
{
	char c;

	for (c = 'a'; c ,= 'z'; c++)
	{
		if (c!= 'e' && c != 'q')
		{
			putchar(c);
		}
	}
	
	putchar('\n');

	return (0);
}
