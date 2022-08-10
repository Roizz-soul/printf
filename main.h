#ifndef MAIN
#define MAIN

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int _printf(const char *format, ...);
int print_string(char *s);
int print_int(int a);
int print_binary(unsigned int a);
int _putchar(char c);

#endif
