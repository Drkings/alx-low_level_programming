#include<stdio.h>
#include<ctype.h>

/**
 * main - print the alphabets from lower cases to upper cases
 *
 * Return: 0 (SUCCESS)
 *
 */
int main(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		letter = tolower(letter);
		putchar(letter);
		if (letter == 'z')
		{
			letter = 'A';
			for (; letter <= 'Z'; letter++)
			{
				putchar(letter);
			}
			break;
		}
	}
	putchar('\n');
	return (0);
}
