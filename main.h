#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _putchar(char c);
int printchar(va_list args);
void printstring(va_list args);
int printmodulo(va_list args);

typedef struct specifiers {
    char specifiers;
    int (*function)(va_list);
} specifiers;

#endif
