#include "main.h"

/**
 * int_to_octal - function to change a number to octal
 * @number: the number to change
 * @octal_str: pointer to a string where to store my octal
 */

void int_to_octal(unsigned int number, char *octal_str)
{
	int i = 0;
	int k, j = 0;
	char tmp;

	do {
		octal_str[i++] = number % 8 + '0';
		number /= 8;
	} while (number > 0);
	octal_str[i] = '\0';

	k = i - 1;
	while (j < k)
	{
		tmp = octal_str[j];
		octal_str[j] = octal_str[k];
		octal_str[k] = tmp;
		j++;
		k--;
	}
}

/**
 * int_to_str - function to change a number to string
 * @num: the number to change
 * @dest: pointer to a string where to store my number
 * Return: pointer to a character
 */

char *int_to_str(long int num, char *dest)
{
	int remainder, index = 0;
	char str_num[100];

	while (num != 0)
	{
		remainder = num % 10;
		num /= 10;
		str_num[index] = (char)(remainder + '0');
		index++;
	}

	remainder = 0;
	while (index--)
	{
		dest[remainder] = str_num[index];
		remainder++;
	}

	dest[remainder] = '\0';

	return (dest);
}

/**
 * _str_len - function to get a string length
 * @str: the string
 * Return: length of the string
 */

int _str_len(char *str)
{
	int length = 0;

	if (str)
	{
		while (str[length] != '\0')
			length++;
	}

	return (length);
}

/**
 * int_to_hex - function to change a number to a hexadecimal
 *		number
 * @number: the number to change into
 * @hex_str: pointer to a character to store result
 * @hex_digits: the character of a hexadecimal number
 */

void int_to_hex(unsigned int number, char *hex_str, char *hex_digits)
{
	int i = 0;
	int j = 0, k;
	char tmp;

	do {
		hex_str[i++] = hex_digits[number % 16];
		number /= 16;
	} while (number > 0);
	hex_str[i] = '\0';

	k = i - 1;
	while (j < k)
	{
		tmp = hex_str[j];
		hex_str[j] = hex_str[k];
		hex_str[k] = tmp;
		j++;
		k--;
	}
}

/**
 * get_address - function to get address of a pointer
 * @ptr: the pointer
 * @str: pointer to a character where to store result
 */

void get_address(int *ptr, char *str)
{
	uintptr_t addr = (uintptr_t)ptr;
	char buffer[16];
	int index, j, digit, i = 0;

	while (addr > 0)
	{
		digit = addr % 16;
		if (digit < 10)
			buffer[i] = digit + '0';
		else
			buffer[i] = digit - 10 + 'a';
		i++;
		addr /= 16;
	}

	str[0] = '0';
	str[1] = 'x';
	index = 2;
	for (j = i - 1; j >= 0; j--)
	{
		str[index] = buffer[j];
		index++;
	}
	str[index] = '\0';
}
