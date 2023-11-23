#include "main.h"
/**
 * mod - print%
 * @args: arguments
 * Return: Success
 */
int print_mod(va_list args)
{
	va_arg(args, int);

	_putchar('%');

	return (1);
}
