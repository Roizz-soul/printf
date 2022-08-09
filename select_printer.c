#include <stdio.h>
#include <stdarg.h>
#include "main.h"
/**
 * select_printer - Selects a printer for the format and print the param.
 * @format: the format to be printed
 * Return: the printer selected for elements to print.
 */
printer_t select_printer(char format)
{
	int i, formats = 16;
	printer_t printers[] = {
		{'c', print_char},
		{'s', print_string},
		{'i', print_int},
		{'d', print_double},/* SPECIAL PRINT MUST BE AT LAST, DON'T MOVE IT!!*/
	};

	for (i = 0; i < formats; i++)
		if (printers[i].format == format)
			return (printers[i]);
	return (printers[i - 1]); /* BY THIS REASON */
}
