#include "main.h"

/**
 * print_alphabet_x10 - prints the lower case alphabets 10x
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
int alpha;
int count = 0;
while (count++ <= 9)
{
for (alpha = 'a'; alpha <= 'z'; alpha++)
_putchar(alpha);
_putchar('\n');
}
}
