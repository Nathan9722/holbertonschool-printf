#include "main.h"
#include <unistd.h>

/**
 * printmodulo - Print %.
 * @args: Arguments.
 * Return: Chars.
 */

int printmodulo(va_list args)
{
	(void)args;

	_putchar('%');

	return (1);
}
