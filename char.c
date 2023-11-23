#include "main.h"
#include <unistd.h>
/**
 * char - function to print a char
 *
 * @args: argument
 * Return: Success
 */
int print_char(va_list  args)
{
	char c = va_arg(args, int);

	_putchar(c);

	return (1);
}
