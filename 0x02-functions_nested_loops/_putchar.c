#include <unistd.h>

/**
 * _putchar - writes the character to stdout
 *
 * @c: charcted to be printed
 *
 * Return: On success 1
 * On fail -1 and errno is set appropiately
 */

int _putchar (char c)
{
	return (write(1, &c, 1));
}
