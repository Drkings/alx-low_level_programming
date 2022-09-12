#include<stdio.h>
#include<ctype.h>

/**
 * main - printing the lowercase alphabets
 *
 * Return: 0 (SUCCESS)
 */
int main(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		letter = tolower(letter);
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
