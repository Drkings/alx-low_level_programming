#include<stdio.h>
#include<ctype>

/**
 * main - printing the lowercase alphabets
 *
 * Resultt: 0 (SUCCESS)
 */
int main(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; Letter++)
	{
		letter = tolower(letter);
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
