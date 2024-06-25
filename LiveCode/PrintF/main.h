#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * FormatSpec - structure for format specifiers
 * @op: operator character
 * @f: function to be returned
 */

typedef struct format
{
	/*Field to hold format specifier*/
	char op;

	/*Field to hold operation*/
	void (*f)(va_list);

} form;

int main(void);

void (*get_func(char format))(va_list args);

int _printf(const char *format, ...);

void print_char(va_list args);
void print_str(va_list args);
void print_int(va_list args);
void print_percent(va_list args);

#endif
