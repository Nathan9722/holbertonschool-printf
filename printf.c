#include "main.h"
#include <stdarg.h>

/**
 * _printf - Format and print data.
 * @format: Format string.
 * Return: Number of characters printed.
 */
int _printf(const char *format, ...)
{
<<<<<<< HEAD
	va_list args;
	const char *p;
	int num = 0;
=======
    va_list args;
    const char *p;
    int num = 0;
>>>>>>> f4a64e9a299c4e252e28a5abc90a11b6fbedd254

    if (format == NULL)
        return -1;

<<<<<<< HEAD
	va_start(args, format);
=======
    va_start(args, format);
>>>>>>> f4a64e9a299c4e252e28a5abc90a11b6fbedd254

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

	va_end(args);
	return (num);
}
