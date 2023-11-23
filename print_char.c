#include "main.h"
#include <unistd.h>
/**
 * print_char - function to print char
 *
 * @args: argument
 * Return: Success
 */
int print_char(va_list  args)
{
	char c = va_arg(args, int);

	_myputchar(c);

	return (1);
}
