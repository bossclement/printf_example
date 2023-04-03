#include <limits.h>
#include <stdio.h>
#include "main.h"

int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Hello my world, it's your boy danny\n");
    len2 = printf("Hello my world, it's your boy danny\n");
    ui = (unsigned int)INT_MAX + 1000;
    addr = (void *)0x6dda438091e09;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    len = _printf("Negative:[%d]\n", -732819);
    len2 = printf("Negative:[%d]\n", -732819);
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    len = _printf("Unsigned:[%u]\n", ui);
    len2 = printf("Unsigned:[%u]\n", ui);
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    len = _printf("Unsigned octal:[%o]\n", ui);
    len2 = printf("Unsigned octal:[%o]\n", ui);
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    len = _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    len2 = printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    len = _printf("Character:[%c]\n", 'H');
    len2 = printf("Character:[%c]\n", 'H');
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    len = _printf("String:[%s]\n", "I am a string !");
    len2 = printf("String:[%s]\n", "I am a string !");
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    len = _printf("Address:[%p]\n", addr);
    len2 = printf("Address:[%p]\n", addr);
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%rrr]\n");
    len = _printf("Unknown:[%rrr]\n");
    len2 = printf("Unknown:[%rrr]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    return (0);
}
