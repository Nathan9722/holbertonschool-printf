#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int (*get_functions(char *specifier))(va_list);
int _putchar(char c);
int printchar(va_list args);
int printstring(va_list args);
int printmodulo(va_list args);
int printdigit(va_list args);

typedef struct specifiers {
    char *specifier;
    int (*f)(va_list);
} specifiers;

#endif
