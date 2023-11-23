#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
<<<<<<< HEAD
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
} modif_t;

int _printf(const char *format, ...);
int _putchar(char c);
int retrieve_func(char cast, va_list args);

int print_mod(va_list args);
int print_string(va_list args);
int print_char(va_list args);
int print_num(va_list args);

#endif
=======
#include <stdio.h>

int _printf(const char *format, ...);
int _putchar(char c);

#endif /* MAIN_H */
