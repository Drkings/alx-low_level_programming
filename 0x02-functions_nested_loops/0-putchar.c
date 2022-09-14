#include <unistd.h>

/**
 * main - prints putchar using its function
 *
 * Return: 0
 */

int main(void)
{
	write(1, "_putchar\n", 9);
	return (0);
}
