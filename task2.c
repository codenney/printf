#include <stdio.h>
#include "main.h"
#include <stdarg.h>
/**
 * _printf - function produces output according to a format
 * @format: - constant character string
 * Return: 0
 */
int _printf(const char *format, ...)
{
	int i;
	int j;
	int array;
	va_list args;

	array = 0;
	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{i++;
			if (format[i] == 'c')
			{char b = (char)va_arg(args, int);

				putchar(b);
				array++;
			}
			else if (format[i] == 's')
			{char *str = va_arg(args, char *);

				for (j = 0; str[j] != '\0'; j++)
				{putchar(str[j]);
			array++;
				}
			}
			else if (format[i] == '%')
			{putchar('%');
		array++;
			}
		}
		else
		{putchar(format[i]);
		array++;
		}
	}
	va_end(args);
	return (array++);
}
