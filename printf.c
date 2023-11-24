#include "main.h"
#include <stdarg.h>

/**
 * _printf - Format and print data.
 * @format: Format string.
 * Return: Number of characters printed.
 */
int _printf(const char *format, ...)
{
    va_list args;
    const char *p;
    int num = 0;

    if (format == NULL)
        return -1;

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

<<<<<<< HEAD
            if (get_functions(specifier, args))
            {
                num += get_functions(specifier, args);
            }
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
=======
			if (specifier == 'c')
				num += printchar(arguments);
			else if (specifier == 's')
				num += printstring(arguments);
			else if (specifier == '%')
			{
				_putchar('%');
				num++;
			}
			else if (specifier == 'i' || specifier == 'd')
				num += printdigit(arguments);
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
>>>>>>> 95be83eb593215e0f3abd4ce08cacfe2615a995d

    va_end(args);
    return num;
}
