#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    /**
     * unsigned int ui;
     * void *addr;
     */

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    len = _printf("Character:[%c]\n", 'H');
    len2 = printf("Character:[%c]\n", 'H');

    len = _printf("String:[%s]\n", "I am a string !");
    len2 = printf("String:[%s]\n", "I am a string !");

    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");

    len = _printf("Len:[%d]\n", len);
    len2 = printf("Len:[%d]\n", len2);

    len = _printf("Length:[%d, %i]\n", len, len);
    len2 = printf("Length:[%d, %i]\n", len2, len2);

    len = _printf("Negative:[%d]\n", -762534);
    len2 = printf("Negative:[%d]\n", -762534);

    len = _printf("%d\n", 0);
    len2 = printf("%d\n", 0);

    len = _printf("%K\n");
    len2 = printf("%K\n");

    len = _printf("%!\n");
    len2 = printf("%!\n");

    _printf(NULL);
    printf(NULL);

    _printf("%c", '\0');
    printf("%c", '\0');

    len = _printf("%");
    len2 = printf("%");

    len = _printf("%d\n", INT_MIN);
    len2 = printf("%d\n", INT_MIN);

    len = _printf("%b\n", -5);
	len2 = printf("%b\n", -5);
    /*
    len = _printf("%b\n", 5);
    len2 = printf("%b\n", 5);
    

    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;


    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);

    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);

    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
    */
    printf("Our printf = %d \nStandard printf = %d\n", len, len2);
    return (0);
}
