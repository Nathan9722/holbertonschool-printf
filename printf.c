#include "main.h"
#include <stdarg.h>

/**
 
_printf - Format and print data.
@format: Format string.
Return: Number of characters printed.
*/
int _printf(const char *format, ...)
{
    va_list args;
    const char *p;
    int num = 0;
    int (*ptrfunction)(va_list);

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
            int result;
            ptrfunction = get_functions(&specifier);
        
            if (ptrfunction)
            {
                result = ptrfunction(args);
            }
            else
            {
                _putchar('%');
                _putchar(specifier);
                result = 2;
            }
            num += result;
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
