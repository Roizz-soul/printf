#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _printf - prints according to format
 * @format: The given format
 * Return: check code
 */
int _printf(const char *format, ...)
{
	va_list params;
	int i = 0, length = 0;

	if ((format == NULL) || (format[0] == '%' && !format[1]))
		return (-1);
	va_start(params, format);
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			length += _putchar(format[i]);
		}
		else if (format[i] == '%' && format[i + 1] != '\0')
		{
			switch (format[i + 1])
			{
				case 'c':
					length += _putchar(va_arg(params, int));
					_putchar(va_arg(params, int));
					break;
				case 's':
					length += print_string(va_arg(params, char *));
					break;
				case '%':
					length += _putchar('%');
					break;
				case 'd':
					length += print_double(va_arg(params, int));
					break;
				case 'i':
					length += print_int(va_arg(params, int));
					break;
				default:
					break;
			}
			i++;
		}
		i++;
	}
	va_end(params);
	return (length);
}
