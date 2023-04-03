#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdint.h>
#include <stdio.h>

typedef struct
{
	char *symbol;
	int (*func)(va_list args);
} functions;

int print_char(va_list args);
int print_num(va_list args);
int print_str(va_list args);
int print_ui(va_list args);
int print_octal(va_list args);

int _printf(char *format, ...);
int _putchar(char c);

int print_low_hex(va_list args);
int print_high_hex(va_list args);
int print_address(va_list args);
int print_per_cent(va_list args);
int print_string(char *str);

char *int_to_str(long int num, char *dest);
int _str_len(char *str);
void int_to_octal(unsigned int number, char *octal_str);
void int_to_hex(unsigned int number, char *hex_str, char *hex_digits);
void get_address(int *ptr, char *str);

#endif
