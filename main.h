#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>

/**
 * struct modifiers - Structure of the format
 * @modifiers: Structure of the format
 * @p: the procedure associated
 *
 */

typedef struct modifiers
{
	char modifiers;
	int (*p)(va_list);
} spec_t;

int _printf(const char *format, ...);
int _putchar(char c);
int get_func(char conv, va_list args);

int print_mod(va_list args);
int print_string(va_list args);
int print_char(va_list args);
int print_num(va_list args);

#endif /* MAIN_H */
