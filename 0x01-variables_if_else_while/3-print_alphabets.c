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
	int aplhabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		alphabet = tolower(alphabet);
		putchar(alphabet);
		if (alphabet == 'z')
		{
			alphabet = 'A';
			for (; alphabet <= 'Z'; alphabet++)
			{
				putchar(alphabet);
			}
			break;
		}
	}
	putchar('\n');
	return (0);
}
