#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
 * print_string - writes the string
 * @params: The name for va_list
 *
 * Return: String Length.
 */
int print_string(char *s)
{
	int length = 0;

	if (s == NULL)
		s = "(null)";
	while (s[length] != '\0')
	{
		_putchar(s[length]);
		length++;
	}

	return (length);
}
