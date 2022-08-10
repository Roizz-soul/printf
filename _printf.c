#include "main.h"

/**
  * _printf - performs the printf function
  * @format: the first argument
  * Return: length of format
  */
int _printf(const char *format, ...)
{
	int i = 0, len = 0;
	va_list ap;

	va_start(ap, format);
	if (format == NULL)
		return (-1);
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			len++;
			_putchar(format[i]);
		}
		else if (format[i] == '%' && format[i + 1] != '\0')
		{
			switch (format[i + 1])
			{
				case '%':
					len++;
					_putchar('%');
					break;
				case 'c':
					len++;
					_putchar(va_arg(ap, int));
					break;
				case 's':
					len += print_string(va_arg(ap, char *));
					break;
				case 'i':
					len += print_int(va_arg(ap, int));
					break;
				case 'd':
					len += print_int(va_arg(ap, int));
					break;
				default:
					break;
			}
			i++;
		}
		i++;
	}

	return (len);
}
