#include "main.h"
#include <unistd.h>

/**
 * print_char - writes the character c to stdout
 * @args: list of arguments
 * Return: number
 */
int print_char(va_list args)
{
	char c = va_arg(args, int);

	return (_putchar(c));
}

/**
 * print_str - function that prints a string
 * @args: list of arguments
 * Return: the length of the string printed
 */

int print_str(va_list args)
{
	char *str = va_arg(args, char *);

	return (print_string(str));
}

/**
 * print_num - function that prints a number
 * @args: list of arguments
 * Return: number
 */

int print_num(va_list args)
{
	int index = 0, count = 0;
	char str_num[100];
	int num = va_arg(args, int);

	if (num < 0)
	{
		count += _putchar('-');
		num = -num;
	}
	else if (num == 0)
	{
		count += _putchar('0');
		return (count);
	}

	int_to_str(num, str_num);
	while (str_num[index])
	{
		count += _putchar(str_num[index]);
		index++;
	}

	return (count);
}

/**
 * print_ui - function that prints a number
 * @args: list of arguments
 * Return: number
 */

int print_ui(va_list args)
{
	int index = 0, count = 0;
	char str_num[100];
	long int num = (long int) va_arg(args, unsigned int);

	if (num < 0)
	{
		count += _putchar('-');
		num = -num;
	}
	else if (num == 0)
	{
		count += _putchar('0');
		return (count);
	}

	int_to_str(num, str_num);
	while (str_num[index])
	{
		count += _putchar(str_num[index]);
		index++;
	}

	return (count);
}

/**
 * print_octal - function that prints a number
 * @args: list of arguments
 * Return: number
 */

int print_octal(va_list args)
{
	unsigned int unsigned_int = va_arg(args, unsigned int);
	char dummy_str[100];

	int_to_octal(unsigned_int, dummy_str);

	return (print_string(dummy_str));
}
