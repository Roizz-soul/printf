#include "main.h"

/**
  * print_sting - prints a string
  * @s: string to be printed
  * Return: lenth of string
  */
int print_string(char *s)
{
	int i, len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
		len++;
	}

	return (len);
}
