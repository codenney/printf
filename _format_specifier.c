#include "main.h"

/**
 * _print_char - prints a single character
 * @list: va_list containing the character to be printed
 *
 * Return: number of characters printed
 */
int _print_char(va_list list)
{
	return (_putchar(va_arg(list, int)));
}

/**
 * _print_string - prints a string
 * @list: va_list containing the string to be printed
 *
 * Return: number of characters printed
 */
int _print_string(va_list list)
{
	int i = 0;
	char *str = va_arg(list, char *);

	if (str == NULL)
	{
		str = "(null)";
	}
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}

/**
 * _print_percent - prints the percentage character
 * @list: va_list containing the character to be printed
 *
 * Return: number of character printed
 */
int _print_percent(__attribute__((unused)) va_list list)
{
	return (_putchar('%'));
}

/**
 * _print_decimal - prints an integer number
 * @list: va_list containing the number to be printed
 *
 * Return: number of numbers printed
 */
int _print_decimal(va_list list)
{
	int value = va_arg(list, int);
	int print_count = 0;

	if (value == INT_MIN)
	{
		_putchar('-');
		print_count++;

		_putchar('2');
		_putchar('1');
		_putchar('4');
		_putchar('7');
		_putchar('4');
		_putchar('8');
		_putchar('3');
		_putchar('6');
		_putchar('4');
		_putchar('8');
		print_count += 10;
		return (print_count);
	}

	if (value < 0)
	{
		_putchar('-');
		print_count++;
		value = -value;
	}
	else if (value == 0)
	{
		_putchar('0');
		print_count++;
		return (print_count);
	}

	print_count += _print_number((int)value);

	return (print_count);
}

/**
 * _print_number - prints an integer number
 * @num: number string to print as an integer
 *
 * Return: count of values printed
 */
int _print_number(int num)
{
	int print_count = 0;

	if (num / 10 != 0)
	{
		print_count += _print_number(num / 10);
	}
	_putchar(num % 10 + '0');
	print_count++;

	return (print_count);
}
