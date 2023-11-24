#include <stdlib.h>
#include <stdarg.h>
#include "main.h"

/**
 * _printf - copy of the original printf.
 *
 * @format: Format by specifier.
 *
 * Return: count of chars.
 */
int _printf(const char *format, ...)
{
	va_list arguments;
	const char *p;
	int num = 0;

	if (format == NULL)
		return (-1);

	va_start(arguments, format);

	for (p = format; *p; p++)
	{
		if (*p == '%' && *(p + 1) == '%')
		{
			_putchar(*p);
			num++;
			p++;
		}
		else if (*p == '%' && *(p + 1) != '%')
		{
			char specifier = *(p + 1);

			if (specifier == 'c')
				num += fun_character(arguments);
			else if (specifier == 's')
				num += fun_string(arguments);
			else if (specifier == '%')
			{
				_putchar('%');
				num++;
			}
			else if (specifier == 'i' || specifier == 'd')
				num += fun_integer(arguments);
			else if (specifier == '\0')
				return (-1);
			else
			{
				_putchar('%');
				_putchar(specifier);
				num += 2;
			}
			p++;
		}
		else
		{
			_putchar(*p);
			num++;
		}
	}

	va_end(arguments);
	return (num);
}
