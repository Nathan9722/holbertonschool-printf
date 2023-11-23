#include "main.h"
#include <unistd.h>
#include <stdarg.h>

/**
 * print_string - Print string.
 * @args: Argument.
 * Return: Nothing.
 */

void printstring(va_list args)
{
    char *str = va_arg(args, char *);

    if (!str)
        str = "NULL";

    if (str[0] != '\0')
    {
        int i;
        for (i = 0; str[i] != '\0'; i++)
            _putchar(str[i]);
    }
}
