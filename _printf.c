#include "main.h"

/**
 * get_function - function to find a function to use
 * @format: a formt specifier
 * Return: pointer to a function
 */

int (*get_function(char format))(va_list args)
{
	functions funcs[] = {
		{"c", print_char},
		{"s", print_str},
		{"d", print_num},
		{"i", print_num},
		{"u", print_ui},
		{"o", print_octal},
		{"x", print_low_hex},
		{"X", print_high_hex},
		{"p", print_address},
		{"%", print_per_cent},
		{NULL, NULL}
	};
	int index = 0;

	while (funcs[index].symbol != NULL)
	{
		if (*(funcs[index].symbol) == format)
			break;
		index++;
	}

	return (funcs[index].func);
}

/**
 * _printf - function to find a function to use
 * @format: pointer to a string
 * @...: list of arguments
 * Return: pointer to a function
 */

int _printf(char *format, ...)
{
	va_list args;
	int index = 0, count = 0;
	int (*func)(va_list args);

	va_start(args, format);
	while (format[index] != '\0')
	{
		if (format[index] == '%')
		{
			func = get_function(format[index + 1]);
			if (func != NULL)
			{
				count += func(args);
				index += 2;
			} else
			{
				if (format[index + 1] == '\0')
					return(-1);
				count += _putchar('%');
				count += _putchar(format[index + 1]);
				index += 2;
			}
			continue;
		}

		count += _putchar(format[index]);
		index++;
	}

	va_end(args);
	return (count);
}
