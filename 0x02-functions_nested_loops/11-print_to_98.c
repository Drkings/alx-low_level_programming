#include "main.h"

/**
 * print_to_98 - function that prints numbers from n to 98
 *
 * @n: starting number in the sequence
 *
 * Return: ALways 0
 */

void print_to_98(int n);
{
if (n >= 98)
{
while (n > 98)
printf("%d, ", n--);
printf("%d\n", n);
}
else
{
while (n < 98)
printf("%d, ", n++);
printf("%d\n", n);
}
}
