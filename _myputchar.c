#include <unistd.h>
  
/**
 * _myputchar - function to print a char
 * @args: argument
 *
 * Return: success
 */
int print_char(va_list args)
{
	char c = va_arg(args, int);

	_my putchar(c);

	return (1);
}