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
	va_list args;
	const char *p;
	int num = 0;

	if (format == NULL)
		return (-1);

	va_start(args, format);

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
				num += printchar(args);
			else if (specifier == 's')
				num += printstring(args);
			else if (specifier == '%')
			{
				_putchar('%');
				num++;
			}
			else if (specifier == 'i' || specifier == 'd')
				num += printdigit(args);
			else if (specifier == '\0')
				return (-1);
			else
			{
                else if (specifier == '%')
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

	va_end(args);
	return (num);
}
