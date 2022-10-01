#include <ctype.h>
#include "main.h"

/**
 * _islower - checks for lowercase character
 *
 * @c: int to be used for thr function argument
 *
 * Return: 1 if success
 * 0 otherwise
 *
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}


