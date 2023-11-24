#include "main.h"
#include <unistd.h>

/**
 * print_digit - print integers.
 *
 * @args: argument.
 *
 * Return: Number of characters printed.
 */
int printdigit(va_list args)
{
    int decimal = 1;
    long int digit = va_arg(args, int);
    long int digitaux;
    int charCount = 0;

    if (digit < 0)
    {
        _putchar('-');
        digit *= -1;
    }

    if (digit < 10)
        return _putchar(digit + '0');

    digitaux = digit;

    while (digitaux > 9)
    {
        decimal *= 10;
        digitaux /= 10;
    }

    while (decimal >= 1)
    {
        _putchar(((digit / decimal) % 10) + '0');
        decimal /= 10;
        charCount++;
    }

    return charCount;
}
