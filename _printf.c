#include "main.h"

/**
 * _printf - Function that produces output according to format
 * @format: format according to what arguments will be printed
 * Return: Success
 */
int _printf(const char *format, ...)
{
	int index = 0, cmp = 0;
	va_list args;

	va_start(args, format);

	if (format == NULL)
		return (-1);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	for (; format[index]; index++)
	{
		if (format[index] == '%')
		{
			cmp += retrieve_func(format[index + 1], args);
			index++;
		}
		else
		{
			cmp += _putchar(format[index]);
		}
	}
	va_end(args);
	return (cmp);
}

