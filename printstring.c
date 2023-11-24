#include "main.h"
#include <stdarg.h>

int printstring(va_list arg)
{
	int i = 0;
	char *s = va_arg(arg, char *);

	if (s == NULL)
		s = "(null)";
	while (s[i] != '\0')
	{
		putchar(s[i]);
		i++;
	}
	return (i);
}