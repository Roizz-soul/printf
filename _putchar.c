#include <unistd.h>
#include <stdio.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: Check code
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
