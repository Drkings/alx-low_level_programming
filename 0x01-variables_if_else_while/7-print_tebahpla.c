#include<stdio.h>
#include<ctype.h>

/**
 * main - prints the lowercase alphabet in reverse, followed by a new line
 *
 * Return -always 0
 */
int main(void)
{
	int letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}
	putchar('\n')
		return (0);

}
