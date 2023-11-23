#include "main.h"
/**
 * print_string -  print string
 * @args: arguments
 * Return: cmp_func
 */
int print_string(va_list args)
{
	int index;
	int cmp_func = 0;
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(null)";

	if (str[0] == '\0')
		return (-1);

	for (index = 0; str[index] != '\0'; index++)
		cmp_func += _myputchar(str[index]);

	return (cmp_func);
}
