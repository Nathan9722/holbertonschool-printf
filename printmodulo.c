#include "main.h"
#include <unistd.h>

/**
 * print_mod - Print %.
 * @args: Arguments.
 * Return: Chars.
 */

int printmodulo(va_list args)
{
	(void)args;

	_putchar('%');

	return (1);
}
