#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _putchar(char c);
int _putchar(char c);

typedef struct specifiers {
    char specifiers;
    int (*function)(va_list);
} formatSpecifiers;

#endif