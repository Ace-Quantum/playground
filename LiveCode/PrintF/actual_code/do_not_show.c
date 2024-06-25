#include "main.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>

/**
 * print_char - prints a character
 * @args: va_list args
 */

void print_char(va_list args)
{
    char c = va_arg(args, int);
	printf("%c", c);
}

/**
 * print_str - prints a string
 * @args: va_list args
 */

void print_str(va_list args)
{
    char *str = va_arg(args, char*);
    printf("%s", str);
}

/**
 * print_int - prints integer(s)
 * @args: va_list args
 */

void print_int(va_list args)
{
    int i = va_arg(args, int);
    printf("%i", i);
}

/**
 * print_percent - prints a percent sign
 * @args: va_list args (not used in output)
 */

void print_percent(va_list args)
{
    printf("%%");
}