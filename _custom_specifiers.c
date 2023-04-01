#include "main.h"

/**
 * _print_binary - print the binary of a number
 * @list: va_list containing the number to be converted
 *
 * Return: nothing
 */
int _print_binary(va_list list)
{
	unsigned int num = va_arg(list, unsigned int);
	int count = 0;
	int binary[64] = {0};
	int i, j;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	for (i = 0; num > 0; i++)
	{
		binary[i] = num % 2;
		num = num / 2;
	}

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(binary[j] + '0');
		count++;
	}

	return (count);
}
