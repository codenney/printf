#include "main.h"

/**
 * _printf - function produces output according to a format
 * @format: - constant character string
 * Return: 0
 */
int _printf(const char *format, ...)
{
	va_list arg;

	int char_count;

	format_converter func_array[] = {
		{"c", _print_char},
		{"s", _print_string},
		{"%", _print_percent},
		{"d", _print_decimal},
		{"i", _print_decimal},
		{NULL, NULL}};

	va_start(arg, format);

	if (format == NULL)
	{
		return (-1);
	}

	char_count = format_printer(format, arg, func_array);

	va_end(arg);

	return (char_count);
}
