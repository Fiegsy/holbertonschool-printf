#include <unistd.h>
#include <stdarg.h>
/**
 * _myputchar - function to print a char
 * @args: argument
 *
 * Return: success
 */
int print_char(va_list args)
{
	char c = va_arg(args, int);

	_myputchar(c);

	return (1);
}
