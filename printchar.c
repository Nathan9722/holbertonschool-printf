#include "main.h"
#include <unistd.h>

/**
 * printchar - Print char
 * @args: Argument.
 * Return: Chars
 */

int printchar(va_list args)
{
	char c = va_arg(args, int);

	_putchar(c);

	return (1);
}
