#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>

int _printf(const char *format, ...);
int _putchar(char c);
int _print_char(va_list);
int _print_string(va_list list);
int _print_percent(va_list list);
int _print_decimal(va_list list);
int _print_number(int n);

/**
 * struct convert - Main entry
 * Description - structure for printing various types
 * @symbol: type to print
 * @func: function to print the type
 */
typedef struct convert
{
	char *symbol;
	int (*func)(va_list);
} format_converter;

int format_printer(const char *format, va_list list, format_converter arr[]);

#endif /* MAIN_H */
