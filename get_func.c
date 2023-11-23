#include "main.h"
/**
 * get_func - function specifiers
 * @conv: specifiers convert
 * @args: arguments
 * Return: Success
 */
int get_func(char conv, va_list args)
{
	int index = 0;
	int cmp_func = 0;

	spec_t spec[] = {
		{'%', print_mod},
		{'s', print_string},
		{'c', print_char},
		{'i', print_num},
		{'d', print_num},
		{0, NULL}
	};
	while (spec[index].specifiers)
	{
		if(conv == spec[index].specifiers)
			cmp_func += spec[index].p(args);
		index++;
	}
	if (cmp_func == 0)
	{
		cmp_func += _putchar('%');
		cmp_func += _putchar(conv);
	}
	return (cmp_func);
}

