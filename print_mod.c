#include "main.h"
/**
 * print_mod - print %
 * @args: arguments
 * Return: Success
 */
int print_mod(va_list args)
{
	va_arg(args, int);

	_myputchar('%');

	return (1);
}
