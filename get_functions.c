#include "main.h"

/**
 * get_functions - function specifier.
 * @specifier: convert specifiers.
 * @args: arguments.
 * Return: 0.
 */

int (*get_functions(char *specifier))(va_list) {
    int i = 0;

    specifiers format[] = {
        {"c", printchar},
        {"s", printstring},
        {"%", printmodulo},
        {"d", printdigit},
        {"i", printdigit},
        {'\0', NULL}
    };

    while (format[i].specifier) {
        if (specifier[0] == format[i].specifier[0])
            return format[i].f;
        i++;
    }

    return 0;
}
