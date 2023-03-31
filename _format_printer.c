#include "main.h"

/**
 * format_printer - function entry
 * @format: the string to write to standard output
 * @list: the va_list arguments
 * @arr: arr of the struct datatype
 * Return: the number of printed character
 */
int format_printer(const char *format, va_list list, format_converter arr[])
{
	int i, j, express;
	int print_count = 0;

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			for (j = 0; arr[j].symbol != NULL; j++)
			{
				if (format[i] == arr[j].symbol[0])
				{
					express = arr[j].func(list);
					if (express == -1)
						return (-1);
					print_count += express;
					break;
				}
			}
			if (arr[j].symbol == NULL && format[i] != ' ')
			{
				if (format[i] != '\0')
				{
					write(1, &format[i - 1], 1);
					write(1, &format[i], 1);
					print_count += 2;
				}
				else
					return (-1);
			}
		}
		else
		{
			write(1, &format[i], 1);
			print_count++;
		}
	}
	return (print_count);
}
