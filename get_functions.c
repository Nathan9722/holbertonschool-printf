#include "main.h"

/**
 * get_functions - function specifier.
 * @convert: convert specifiers.
 * @args: arguments.
 * Return: 0.
 */

int get_functions(char convert, va_list args) {
    int i = 0;

    specifiers format[] = {
        {'c', printchar},
        {'s', printstring},
        {'%', printmodulo},
        {'d', printdec},
        {'i', printint},
        {NULL, NULL}
    };

    while (format[i].specifiers) {
        if (convert == format[i].specifiers)
            return format[i].function(args);
        i++;
    }

    return 0;
}
